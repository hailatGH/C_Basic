#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: the number.
 *
 * Return: -1 if n < 0; 1 if n == 0; factorail of n if n > 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	n = n * factorial((n - 1));
	return (n);
}
