#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concated.
 * @src: String to be concated.
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len_src, len_dest;

	len_src = len_dest = 0;
	while (*(dest + len_dest))
		len_dest++;
	while ((*(dest + len_dest) = *(src + len_src)))
	{
		len_src++;
		len_dest++;
	}
	return (dest);
}
