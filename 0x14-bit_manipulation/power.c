#include "main.h"
#include <stdio.h>
/**
*power - a function that returns power of a number
*@base : the number
*@exponent: the power
*Return: the wanted number
*/
unsigned int power(unsigned int base, unsigned int exponent)
{
unsigned int result;
unsigned int i;
result = 1;
i = 0;
for (i = 0; i < exponent; ++i)
{
result *= base;
}
return (result);
}
