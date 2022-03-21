#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: arg1 to be swaped.
 * @b: arg2 to be swaped
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
