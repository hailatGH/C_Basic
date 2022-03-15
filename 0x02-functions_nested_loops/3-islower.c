#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to be checked if in lowercase.
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c <= 90)
		return (0);
	else
		return (1);
}
