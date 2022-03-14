#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all th enumbers of base 16 in lowercase
 * only using putchar.
 * Return: returns 0.
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
