#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int int_isupper(int c)
{
	int r;

	if (isupper(c))
	{
		r = 1;	
	}
	else
	{
		r = 0;
	}
	return (r);
}
