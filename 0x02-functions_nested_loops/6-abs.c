/**
 *_abs - a function that gives the absolute value
 *
 *@n: the number of test
 *
 *Return: absolute value
 */

int _abs(int n)
{
	int x;


	if (n < 0)
	{
		x = n * (-1);
		return (x);
	}
	else
	{
		return (n);
	}
}
