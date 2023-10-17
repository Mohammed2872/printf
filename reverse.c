#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse - print reversed string
 * @x: string written
 * Return: num of char
*/

int print_rev(va_list x)
{
	char *st;
	int i, j = 0;

	st = va_arg(x, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
