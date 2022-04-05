#include "holberton.h"
#include "stdlib.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: value of the array.
 *
 * Return: Null if size is 0 or if it failts or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arry;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arry = malloc(size * sizeof(char));
	while (i < size)
	{
		arry[i] = c;
		i++;
	}
	return (arry);
}
