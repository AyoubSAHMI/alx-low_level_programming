#include "main.h"
#include "power.c"
/**
 *binary_to_uint - function that transform binary to uint
 *@b: the binary number
 *Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, sum, e;
i = 0;
e = 0;
sum = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
i++;
}
while (i > 0)
{
if (b[i - 1] != '0' && b[i - 1] != '1')
return (0);
sum = sum + (b[i - 1] - '0') * power(2, e);
i--;
e++;
}
return (sum);
}
