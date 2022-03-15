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

	for (i = 0; i < 100; i++)
	{
		if ((i/10) < (i%10))
		{
			putchar(i/10 + '0');
			putchar(i%10 + '0');
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
