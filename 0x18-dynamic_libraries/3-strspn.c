#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: source
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			l++;
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}
