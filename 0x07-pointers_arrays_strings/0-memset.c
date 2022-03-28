#include "main.h"

/**
 * _memset - function fills the first n bytes
 * of the memory area pointed to by s with the
 * constant byte b
 * @s: original array.
 * @b: replacing char.
 * @n: the first bytes to be replaced.
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
