#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *
 * @params: void
 *
 * return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
