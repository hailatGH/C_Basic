#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter.
 * @str: the string given.
 *
 * Return: NULL for NULL str and Pointer for success.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *new_str = NULL;

	if (str == NULL)
		return (NULL);

	if (str != NULL)
	{
		while (*(str + i))
			i++;

		new_str = malloc(i * sizeof(char));
		if (new_str != NULL)
		{
			while (j < i)
			{
				new_str[j] = str[j];
				j++;
			}
		}
	}
	return (new_str);
}
