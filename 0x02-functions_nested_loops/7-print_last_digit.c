#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = abs(last_digit);

	_putchar(last_digit + '0');

	return (last_digit);
}
