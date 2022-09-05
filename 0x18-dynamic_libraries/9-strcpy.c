#include "main.h"

/**
 * _strcpy - copies the string pointed by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
