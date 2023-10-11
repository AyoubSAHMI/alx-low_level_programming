/**
 *_islower - check for the character if it's in lower case or not
 *
 *@c: entry variable
 *
 *Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
