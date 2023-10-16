/**
 *reset_to_98 - a function that change a value of an int pointed to
 *@n: a pointer to an int
 *return: void, it changes directly the int pointed to
 */

void reset_to_98(int *n)
{
	int *p;

	p = &n;

	*p = 98;
}
