#include "main.h"
/**
 *_strchr - a function that returns the pointer of a caracter in a string
 *@s: the given string
 *@c: the char we are looking for
 *Return: a pointer to the first occurence of the char in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
