#include "main.h"
#include <stdlib.h>
/**
 *str_concat - a function that concatenate two strings
 *@s1: the first string
 *@s2: second string
 *Return: a pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int length1, length2;
	char *ptr;
	int i, j;

	if (s1 == NULL)
	{
		s1 =  "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	length2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		length1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length2++;
	}
	ptr = malloc(sizeof(char) * ((length1 + length2) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[length1 + j] = s2[j];
	}
	return (ptr);
}
