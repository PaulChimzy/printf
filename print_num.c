#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * print_num - prints an integer to the output stream
 * @integer: integer value to be printed
 * Return: Number of digits in the integer
 */
int print_num(int integer)
{
	int counter = 0, divisor = 0, i_print = 0;

	if (integer < 0)
	{
		_putchar('-');
		counter++;
		integer *= -1;
	}
	else if (integer == 0)
	{
		_putchar('0' + 0);
		counter++;
		return (counter);
	}
	for (divisor = 1; divisor < INT_MAX; divisor *= 10)
	{
		if ((integer / divisor) < 10)
		{
			while (divisor > 0)
			{
				i_print = integer / divisor;
				_putchar('0' + i_print);
				counter++;
				integer = integer - (i_print * divisor);
				divisor /= 10;
			}
			break;
		}
	}
	return (counter);
}
