#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: prints alphabet in lowercase and then in uppercase
 * by only using putchar.
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
