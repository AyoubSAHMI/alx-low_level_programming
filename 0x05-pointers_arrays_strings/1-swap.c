#include "main.h"

/**
 *swap_int - a function that swap values of two ints using pointers
 *@a: pointer of number a
 *@b: pointer of number b
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
