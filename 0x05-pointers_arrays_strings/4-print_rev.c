#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	
	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
