#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: Pointer to the new string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;
	unsigned int count2 = 0;
	char *new_str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;

	new_str = malloc((i + j + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	if (new_str != NULL)
	{
		while (count < i)
		{
			new_str[count] = s1[count];
			count++;
		}
		while (count2 < j)
		{
			new_str[count + count2] = s2[count2];
			count2++;
		}
		new_str[i + j] = '\0';
	}
	return (new_str);
}
