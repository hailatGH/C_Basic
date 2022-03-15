#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two digit numbers
 * by using only putchar.
 * Return: returns 0
 */
int main(void)
{
	int i;
	int f;
	int l;

	for (i = 0; i < 100; i++)
	{
		f = i / 10;
		l = i % 10;

		if (f < l)
		{
			putchar(f + '0');
			putchar(l + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
