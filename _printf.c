#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a string of zero or more directives
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int char_count;
	va_list args;
	convert_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_integer},
		/*{"b", print_binary},*/
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	char_count = parser(format, funcs, args);

	va_end(args);
	return (char_count);
}
