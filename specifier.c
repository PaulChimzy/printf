#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * specify - specifies which converter and prints appropriately
 * @spec: specified converter for printf
 * @argm: pointer to current variable argument to be printed
 * Return: count of the values written to the screen
 */
int specify(const char *spec, va_list argm)
{
	int counter = 0;
	char *str = NULL;

	switch (*spec)
	{
		case 'c':
			_putchar(va_arg(argm, int));
			return (1);
		case 's':
			str = va_arg(argm, char *);
			while (str[counter] != '\0')
			{
				_putchar(str[counter]);
				counter++;
			}
			return (counter);
		case '%':
			_putchar(*(spec));
			return (1);
		default:
			_putchar(*(spec - 1));
			_putchar(*(spec));
			return (2);
	}
}
