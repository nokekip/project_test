#include "main.h"

/**
 * print_number - Prints a number
 * @args: argument list
 * Return: number of printed characters
 */
int print_number(va_list args)
{
	int num, len = 0, d = 1;
	unsigned int n;

	num = va_arg(args, int);
	if (num < 0)
	{
		len += _putchar('-');
		n = -num;
	}
	else
		n = num;

	for (; n / d > 9; )
		d = d * 10;

	for (; d != 0; )
	{
		len += _putchar('0' + n / d);
		n %= d;
		d /= 10;
	}

	return (len);
}

/**
 * print_uns_number - Prints an unsigned number
 * @num: unsigned number
 * Return: number of printed characters
 *
int print_uns_number(unsigned int num)
{
	unsigned int n;
	int len = 0, d = 0;

	n = num;
	if (n < 0)
		len += _putchar('-');

	for (; n / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		len += _putchar((n / d) + '0');
		n % d;
		d /= 10;
	}

	return (len);
	}
 *
 */
