#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet teen times
 * Desription: prints lower case alphabet ten times
 * Return: returns void
 */

void print_alphabet_x10(void)
{
	int i=0;
	char c;

	while (i <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
