#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: prints exactly the string "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19" with out using printf and puts.
 * Return: returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	
	return (1);
}
