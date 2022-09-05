#include <stdio.h>

int add(int a, int *b)
{
	int i;
	int sum = 0;

	for (i = 0; i < a; i++)
	{
		sum += b[i];
	}
	return sum;
}
