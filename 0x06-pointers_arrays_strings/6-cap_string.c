#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s1: the string.
 *
 * Return: string.
 */
char *cap_string(char *s1)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s1 + i))
	{
		if (*(s1 + i) >= 'a' && *(s1 + i) <= 'z')
		{
			if (i == 0)
				*(s1 + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s1 + i - 1))
						*(s1 + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s1);
}
