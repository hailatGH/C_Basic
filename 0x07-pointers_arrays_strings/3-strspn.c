#include "main.h"

/**
 * _strspn - Returns the number of bytes in the
 * initial segment of s which consist only of
 * bytes from accept.
 * @s: initial segment.
 * @accept: checking segment.
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
