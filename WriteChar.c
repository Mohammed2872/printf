#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @ch: The character will print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _putchar(char ch)
{
	static char buf[1024];
	static int i;

	if (ch == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (ch != -1)
	{
		buf[i] = ch;
		i++;
	}
	return (1);
}
/**
 * _puts -> prints a string to stdout
 * @str: pointer to the string to print
 * Return: num of chars has written
 */
int _puts(char *s)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
