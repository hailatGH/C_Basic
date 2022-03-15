#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations of three digits
 * using only puchar function
 * Return: returns 0.
 */
int main(void)
{
	int f;
	int m;
	int l;
	int i;

	for (i = 0; i < 1000; i++)
	{
		f = ((i / 10) / 10) % 10;
		m = (i / 10) % 10;
		l = i % 10;
		if ((f < m) && (m < l))
		{
			putchar(f + '0');
			putchar(m + '0');
			putchar(l + '0');
			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
