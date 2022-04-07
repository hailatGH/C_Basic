#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - unction that allocates memory using malloc.
 * @b: size of memory.
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c = NULL;

	c = malloc(b);
	if(c == NULL)
		exit(98);
	return (c);
}
