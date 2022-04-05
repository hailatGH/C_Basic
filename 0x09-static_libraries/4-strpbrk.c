#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence
 * in the string s of any of the bytes in the string accept.
 * @s: the string
 * @accept: other string
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(accept + j) != '\0')
			return (s + i);
	}
	return (0);
}
