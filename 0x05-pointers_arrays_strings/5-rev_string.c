#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
