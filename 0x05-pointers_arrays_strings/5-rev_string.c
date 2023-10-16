#include "main.h"
/**
 *rev_string - a function that prints a string in reverse
 *@s: a given string
 *Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char p;
	int n;

	i = 0;

	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}

	n = i;

	for (i = n - 1 ; i >= 0 ; i--)
	{

		for (j = 0 ; j < n ; j++)
		{
			s[j] = p[i];
		}
	}
}
