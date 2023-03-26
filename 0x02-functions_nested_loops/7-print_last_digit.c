#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -1 * n;

	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}

