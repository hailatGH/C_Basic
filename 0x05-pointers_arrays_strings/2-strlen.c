#include "main.h"

/**
 * _strlen - returns th length of a string.
 * @s: base address of the string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
