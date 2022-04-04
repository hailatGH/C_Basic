#include "main.h"

/**
 * _hailat - Return if the input is a prime number.
 * @i: root to check of the num.
 * @n: the num.
 *
 * Return: 0 for non prime and 1 for prime.
 */
int _hailat(int i, int n)
{
	if (n == 2)
		return (2);
	if (n % 2 == 0)
		return (0);
	if ((n % i == 0) && (n != i))
		return (0);
	if ((n % i == 0) && (n == i))
		return (1);
	return (_hailat(i + 1, n));
}

#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the num.
 *
 * Return: 1 if n is prime or 0 if not.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_hailat(2, n));
}
