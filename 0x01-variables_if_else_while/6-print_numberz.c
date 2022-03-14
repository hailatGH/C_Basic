#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: prints all single dgit numbers of base 10 starting from 0
 * and by only using putchar.
 * Return: returns 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return(0);
}
