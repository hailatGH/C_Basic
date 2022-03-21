#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a
 * new line.
 * @str: address of the string.
 *
 * Retrun: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i != 0)
			i++
		_putchar(str[i]);
	_putchar('\n');
}
