#include <stdio.h>

/**
 * void swap_int(int *a, int *b); - Entry point for the program
 *
 * @*a: pointer of a
 * @*b: pointer to b
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
