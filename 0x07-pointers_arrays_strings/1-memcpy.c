#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: the pointer of destination
 *@src: the source pointer
 *@n: the number of bytes we will copy
 *Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
