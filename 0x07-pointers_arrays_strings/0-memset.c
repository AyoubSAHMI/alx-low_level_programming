#include "main.h"

/**
 *_memset - a function that modifies a set with defined byte
 *@s: a pointer to an area
 *@b: the byte will use to fill s
 *@n: number of times we will use b to fill s
 *Return: a pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
