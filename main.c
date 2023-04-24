#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
	char first = 'o';
	char sec = 'e';
	char *s = "balling";
    len = _printf("T%cday is %c good day w%c are %s%%\n", first, 'a', sec, s);
	// len = _printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]", len, len);
}