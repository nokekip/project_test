#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>


typedef struct converter
{
	char *sym;
	int (*fnc)(va_list);
} convert_t;

int parser(const char *format, convert_t funcs[], va_list args);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
/*
 * int print_binary(va_list);

int print_uns_number(unsigned int);
*
*/

#endif
