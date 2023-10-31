#include "main.h"
#include <stdlib.h>
/**
 *_strdup - a function that returns a pointer to a a string duplicate
 *@str: the string that will be duplicated
 *Return: a pointer to a sting or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	ptr = malloc(sizeof(char) * size);
	*ptr = *str;

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
