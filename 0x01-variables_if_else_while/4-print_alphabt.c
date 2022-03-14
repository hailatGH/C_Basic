#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet latters in lowercase except q and e
 * useing only putchar
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'e') || (ch == 'q'))
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
