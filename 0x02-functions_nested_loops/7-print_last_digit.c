#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the variable where the last digit is going to be extracted from.
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n *= -1;
	l = n % 10;
	_putchar(l + '0');
	return (l);
}
