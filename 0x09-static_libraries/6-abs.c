#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the variable where absolute value is going to be computed on.
 *
 * Return: the absolute value of the number.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
