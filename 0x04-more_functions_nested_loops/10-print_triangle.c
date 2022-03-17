#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: 0.
 */
void print_triangle(int size)
{
	int row, colh, cols;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = size; row >= 1; row--)
		{
			for (cols = row; cols > 1; cols--)
				_putchar(' ');

			for (colh = 1; colh <= (size - row) + 1; colh++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
