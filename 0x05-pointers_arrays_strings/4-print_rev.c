#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: address of the string to be printed out.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	;
	len--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
