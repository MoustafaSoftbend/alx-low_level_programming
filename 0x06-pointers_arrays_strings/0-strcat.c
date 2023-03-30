#include <stdio.h>
#include "string.h"

/**
 * *_strcat - concatenate two strings
 *
 * @params: dest for destination pointer, src for source
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
