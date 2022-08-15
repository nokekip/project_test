#include "main.h"
/**
 * parser - resolves and matches flags to respective funcs
 * @format: string of >= 0 directives
 * @funcs: list of all necessary functions
 * @args: all passed arguments
 * Return: number of printed characters
 */
int parser(const char *format, convert_t funcs[], va_list args)
{
	int i = 0, c = 0, char_count = 0, ret;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (funcs[c].sym != NULL)
			{
				if (format[i + 1] == funcs[c].sym[0])
				{
					ret =  funcs[c].fnc(args);
					if (ret == -1)
						return (-1);
					char_count += ret;
					break;
				}
				c++;
			}
			if (funcs[c].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_count += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
		i++;
	}
	return (char_count);
}
