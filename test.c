#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char *s;

	c = 'H';
	s = "hello";

	_printf("%c, %s\n", c, s);
	return (0);
}
