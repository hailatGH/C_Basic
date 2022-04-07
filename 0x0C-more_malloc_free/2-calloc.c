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
	void *arry = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arry = malloc(nmemb * size);
	if (arry == NULL)
		return (NULL);
	return (arry);
}
