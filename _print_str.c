#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _print_str - produces output according to a format
 * @args: The argument
 *
 * Return: The number of characters that were printed
 */
int _print_str(va_list args)
{
	int k = 0;
	char *str = va_arg(args, char *);
	if (str == NULL) 
		str = "(null)";

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	return (k);
}
