#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s1: the string.
 *
 * Return: string.
 */
char *cap_string(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (((s1[i] == ' ') || (s1[i] == '\t')) &&(s1[i+1] > 90))
			s1[i + 1] = s1[i + 1] - 32;
	}
	if (s1[0] > 90)
		s1[0] = s1[0] - 1;

	return (s1);
}
