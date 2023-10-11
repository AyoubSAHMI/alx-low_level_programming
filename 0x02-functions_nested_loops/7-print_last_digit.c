#include "main.h"

/**
 *print_last_digit - is a function that return the last digit of a given number
 *
 *@n: the number we will use
 *Return: an int
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
