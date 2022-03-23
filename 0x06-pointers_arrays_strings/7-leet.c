#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s1: the string.
 *
 * Return: the encoded string.
 */
char *leet(char *s1)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s1 + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s1 + i))
				*(s1 + i) = b[j];
		}
	}
	return (s1);
}
