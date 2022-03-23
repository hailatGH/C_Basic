#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s1: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s1)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s1 + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s1 + i))
			{
				*(s1 + i) = b[j];
				break;
			}
		}
	}
	return (s1);
}
