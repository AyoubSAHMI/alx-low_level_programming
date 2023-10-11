/**
 *_isalpha - a function that verifies if an entry is a lettre or not
 *@c: entry variable
 *
 *Return: 1 if it's a letter, 0 if it's anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
