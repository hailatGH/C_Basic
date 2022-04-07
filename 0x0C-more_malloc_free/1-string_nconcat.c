#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: first 6 bytes of s2.
 *
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l_s1 = 0, l_s2 = 0, t_size = 0, i = 0, j = 0;
	char *new_str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + l_s1))
		l_s1++;
	while (*(s2 + l_s2))
		l_s2++;
	if (n >= l_s2)
		n = l_s2;
	t_size = l_s1 + l_s2 + 1;
	new_str = (char *)malloc(t_size * sizeof(char));
	while (i < l_s1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		new_str[j + i] = s2[j];
		j++;
	}
	new_str[t_size] = '\0';
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}
