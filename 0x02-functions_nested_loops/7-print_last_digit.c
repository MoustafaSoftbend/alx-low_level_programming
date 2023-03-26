#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n % 10);
	_putchar('0' + last_digit);
	
	if (n < 0)
		_putchar('-');
	return (last_digit);
}

