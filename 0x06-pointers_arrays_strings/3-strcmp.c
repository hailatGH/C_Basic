#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string arg to be compared.
 * @s2: second string arg to be compared.
 *
 * Return: posetive number if s1 > s2, zero is s1 == s2, negative s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;

	return (*(s1 + i) - *(s2 + i));
}
