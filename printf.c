#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints whatever is passed as a variable argument list
 * @format: pointer to string to be printed including (conversion specifiers)
 * Return: the number of characters printed if everything works fine
 */
int _printf(const char *format, ...)
{
	va_list argm;
	int i = 0;
	int len_counter = 0;

	va_start(argm, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case '%':
				len_counter += specify((format + i + 1), argm);
				i++;
				break;
			default:
				_putchar(format[i]);
				len_counter++;
				break;
		}
		i++;
	}
	return (len_counter);
}
