#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: copied to.
 * @src: copied from.
 * @n: number of characters to be copied.
 *
 * Return: pointer to dest value.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (len < n && *(src + len))
	{
		*(dest + len) = *(src + len);
		len++;
	}
	while (len < n)
	{
		*(dest + len) = '\0';
		len++;
	}

	return (dest);
}
