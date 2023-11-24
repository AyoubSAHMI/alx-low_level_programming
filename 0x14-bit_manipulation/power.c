#include "main.h"
/**
 *power - calculate a power b
 *@a: base
 *@b: power
 *Return: power of a
 */
unsigned int power(unsigned int a, unsigned int b)
{
unsigned int p, i;
i = 0;
p = 1;
if (b == 0)
return (1);
while (i < b)
{
p = p *a;
i++;
}
return (p);
}
