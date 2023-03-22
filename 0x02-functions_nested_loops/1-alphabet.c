#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';
	while ( a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}


