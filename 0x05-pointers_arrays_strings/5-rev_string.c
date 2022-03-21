#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: address of the string to be reversed.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	half = len / 2;
	i = 0;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
