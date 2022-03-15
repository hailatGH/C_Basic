#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the variable where the last digit is going to be extracted from.
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
