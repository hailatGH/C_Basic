#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: prints all single digit numbers of base 10 starting from 0
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
