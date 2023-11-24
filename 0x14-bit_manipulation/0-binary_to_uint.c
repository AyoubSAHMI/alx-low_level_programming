#include "main.h"
#include "power.c"
/**
 *binary_to_uint - function that transform binary to uint
 *@b: the binary number
 *Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, val, j;

	i = 0;
	j = 0;
	val = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
	}
	for (j = 0; j < i; j++)
	{
		val += ((b[j] - '0') * power(2, i));
	}
	return (val);
}
