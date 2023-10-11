#include "main.h"

/**
 *print_sign - is a function that checks if a number is positive of negative
 *
 *@n: number of test
 *
 *Return: 1 if number is positive, 0 if it's equal to 0, -1 if it's less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}
