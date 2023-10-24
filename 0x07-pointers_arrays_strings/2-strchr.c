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

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (0);
		}
		i++;
	}
}
