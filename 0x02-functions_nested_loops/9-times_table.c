#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int r;
	int f;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			f = r / 10;
			l = r % 10;

			if (f == 0)
				_putchar(' ');
				_putchar(l + '0');
			else
			{
				_putchar(f + '0');
				_putchar(l + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
