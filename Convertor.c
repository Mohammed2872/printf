#include "main.h"
/**
 * convert - converts number and Base into string
 * @number: input number
 * @Base: input Base
 * @lwcase: flag if hexa values need to be lowercase
 * Return: string
 */
char *convert(unsigned long int number, int Base, int lwcase)
{
	static char *rep;
	static char buff[50];
	char *pointer;

	rep = (lwcase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	pointer = &buff[49];
	*pointer = '\0';
	do {
		*--pointer = rep[number % Base];
		number /= Base;
	} while (number != 0);

	return (pointer);
}
