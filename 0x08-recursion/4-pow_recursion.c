#include "main.h"

/**
 * _pow_recursion - function that returns the values of
 * x raised to the power of y.
 * @x: base.
 * @y: power.
 *
 * Return: x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
