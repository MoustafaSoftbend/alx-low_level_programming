#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Entry point for the program
 *
 * @c: param that takes integer as an input
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
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
