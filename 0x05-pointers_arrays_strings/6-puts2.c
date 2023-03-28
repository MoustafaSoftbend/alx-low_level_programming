#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	
	putchar('\n');
}

