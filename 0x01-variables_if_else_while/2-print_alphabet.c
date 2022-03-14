#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lower case
 * by only using putchar.
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
