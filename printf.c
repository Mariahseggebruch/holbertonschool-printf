#include <stdrg>
#include "main.h"
#include <stdio.h>

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...);
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%i", printf_int}, {"%d", printf_dec}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

int _printf(const char *format, ...)

{int i = 0;
while (format[i] != '\0')
}
if (format[i] == '%')
	(format[i + 1];
}
{
if (format[i + 1] == 's')
	_pucthar(var_arg)
}
{
if (format[i + 1] == 'c')
	_putchar(var_arg)
{	_putchar (format[i]);
	i++;
}
return (i);
