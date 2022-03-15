#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations ot two tow-digit numbers
 * using only putchar
 * Return: returns 0.
 */
int main(void)
{
	int i;
	int j;
	int ff;
	int fl;
	int lf;
	int ll;

	for (i = 0; i < 100; i++)
	{
		ff = i / 10;
		fl = i % 10;

		for (j = 0; j < 100; j++)
		{
			lf = j / 10;
			ll = j % 10;

			if (i < j)
			{
				putchar(ff + '0');
				putchar(fl + '0');
				putchar(' ');
				putchar(lf + '0');
				putchar(ll + '0');

				if (!((i == 98) && (j == 99)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
