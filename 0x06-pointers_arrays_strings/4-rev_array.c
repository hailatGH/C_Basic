#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array.
 * @n: the number of elements of the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int half_n = 0;
	int tmp, i;

	if (n % 2 != 0)
		n--;

	half_n = n / 2;
	i = 0;
	while (i < half_n)
	{
		tmp = a[n - i];
		a[n - i] = a[i];
		a[i] = tmp;
		i++;
	}
}
