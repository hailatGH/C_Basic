#include "main.h"

/**
 * _strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * @haystack: the original string.
 * @needle: the substring.
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	for (j = 0; *(haystack + j); j++)
	{
		if (*(haystack + j) == *needle)
			break;
	}
	return (haystack + j);
}
