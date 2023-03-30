#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, taking at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be taken from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0' && n-- > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';
	
	return (dest);
}
