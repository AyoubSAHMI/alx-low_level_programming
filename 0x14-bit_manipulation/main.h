#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned int power(unsigned int base, unsigned int exponent);

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
#endif
