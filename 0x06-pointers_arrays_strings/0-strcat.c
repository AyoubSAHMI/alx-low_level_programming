#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *
 *@src: the source string
 *@dest: the string that will be updated
 *Return: the new string
 */

char *_strcat(char *dest, char *src)
{

	int i, j;

	i = 0;
	j = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		for (j = 0 ; dest[j] != '\0' ; j++)
		{
			dest[j + i] = src[i];
		}
	}
	dest[j + i] = '\0';
	return (dest);
}
