#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single digit numbers.
 * Return: returns 0.
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
