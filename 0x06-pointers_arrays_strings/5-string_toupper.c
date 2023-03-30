#include <stdio.h>

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to string to modify
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}

	return (s);
}
