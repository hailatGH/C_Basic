#include "main.h"
#include <stdlib.h>

/**
 * array_range - unction that creates an array of integers.
 * @min: min value
 * @max: max value
 *
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *arry, size = 0, i, j = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arry = malloc(size * sizeof(int));
	if (arry == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arry[j] = i;
		j++;
	}
	return (arry);
}
