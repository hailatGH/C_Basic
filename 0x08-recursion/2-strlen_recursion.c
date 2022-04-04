#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the string.
 *
 * Return: the string length.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	i = _strlen_recursion(s) + 1;
	return (i);
}
