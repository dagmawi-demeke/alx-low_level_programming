#include "main.h"

/*
 * main - Prints _putchar
 *
 * Return : always 0
 */

int main(void)
{

	char i[] = "_putchar";
	int j;

	for (j = 0; j<=8; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');
	return (0);
}
