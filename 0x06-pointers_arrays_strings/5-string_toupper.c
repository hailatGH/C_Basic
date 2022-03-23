#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @s1: string arg.
 *
 * Return: Uppercase string.
 */
char *string_toupper(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > 90)
			s1[i] = s1[i] - 32;
	}

	return (s1);
}
