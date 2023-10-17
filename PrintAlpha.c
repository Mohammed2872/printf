#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @list: va_list arguments from _printf
 * @flptr: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list list, flags_t *flptr)
{
	char *s = va_arg(list, char *);

	(void)flptr;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @list: va_list arguments from _printf
 * @flptr: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list list, flags_t *flptr)
{
	(void)flptr;
	_putchar(va_arg(list, int));
	return (1);
}
