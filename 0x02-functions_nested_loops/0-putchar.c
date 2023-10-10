#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char);

int main(void)
{
	char ch[] = "_putchar";
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
