#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array,
 * using malloc
 * @nmemb: number of elements in array.
 * @size: size of each member.
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry = NULL;
	unsigned int i, t_size;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	t_size = nmemb * size;
	arry = malloc(t_size);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < t_size; i++)
		arry[i] = 0;
	return (arry);
}
