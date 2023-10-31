#include "main.h"
#include <stdlib.h>
/**
*create_array - a function that creates an array of char
*@size: the size of the array
*@c: the char that will be used
*Return: a pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * size);

	if (malloc(sizeof(*ptr) * size) == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
