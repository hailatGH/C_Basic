#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 * @a0: integer to print
 * @a1: integer to print
 * @a2: integer to print
 * @a3: integer to print
 * @a4: integer to print
 * @a5: integer to print
 * @a6: integer to print
 * @a7: integer to print
 * @a8: integer to print
 * @a9: integer to print
 * @s0: integer to print
 * @s1: integer to print
 * @s2: integer to print
 * @s3: integer to print
 * @s4: integer to print
 * @s5: integer to print
 * @s6: integer to print
 * @s7: integer to print
 * @s8: integer to print
 *
 * Return: void
 */
void hailat(int n, int a0, int a1, int a2, int a3,
int a4, int a5, int a6, int a7, int a8, int a9,
int s0, int s1, int s2, int s3, int s4, int s5,
int s6, int s7, int s8)
{
	if (n < 0)
	{
		_putchar('-');
		a0 *= -1;
		a1 *= -1;
		a2 *= -1;
		a3 *= -1;
		a4 *= -1;
		a5 *= -1;
		a6 *= -1;
		a7 *= -1;
		a8 *= -1;
		a9 *= -1;
	}
	if (s0 != 0)
		_putchar('0' + a0);
	if (s1 != 0)
		_putchar('0' + a1);
	if (s2 != 0)
		_putchar('0' + a2);
	if (s3 != 0)
		_putchar('0' + a3);
	if (s4 != 0)
		_putchar('0' + a4);
	if (s5 != 0)
		_putchar('0' + a5);
	if (s6 != 0)
		_putchar('0' + a6);
	if (s7 != 0)
		_putchar('0' + a7);
	if (s8 != 0)
		_putchar('0' + a8);
	_putchar('0' + a9);
}

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int s0, s1, s2, s3, s4, s5, s6, s7, s8;

	a0 = n / 1000000000;
	s0 = a0;
	a1 = (n / 100000000) % 10;
	s1 = s0 + a1;
	a2 = (n / 10000000) % 10;
	s2 = s1 + a2;
	a3 = (n / 1000000) % 10;
	s3 = s2 + a3;
	a4 = (n / 100000) % 10;
	s4 = s3 + a4;
	a5 = (n / 10000) % 10;
	s5 = s4 + a5;
	a6 = (n / 1000) % 10;
	s6 = s5 + a6;
	a7 = (n / 100) % 10;
	s7 = s6 + a7;
	a8 = (n / 10) % 10;
	s8 = s7 + a8;
	a9 = n % 10;
	hailat(n, a0, a1, a2, a3, a4, a5, a6, a7, a8,
	a9, s0, s1, s2, s3, s4, s5, s6, s7, s8);
}
