#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: address of the string to be printed.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
