#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string to be appended on.
 * @src: sring to be appended in.
 * @n: number of characters the src string appended on dest.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_src, len_dest;

	len_src = len_dest = 0;
	while (*(dest + len_dest))
		len_dest++;
	while (len_src < n && *(src + len_src))
	{
		*(dest + len_dest) = *(src + len_src);
		len_src++;
		len_dest++;
	}

	return (dest);
}
