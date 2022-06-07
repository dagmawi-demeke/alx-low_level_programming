#include "main.h"

/**
 * main - program that print alphabet
 * Description: prints lowwer case alphabet
 * Return: Always 0.
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

