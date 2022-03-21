#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: address of the string
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len, n, i;
	for (len = 0; str[len] != '\0'; len++)
	;
	if (len % 2 != 0)
		len--;
	n = len / 2;
	for (i = n; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
