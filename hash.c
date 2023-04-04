#include <stdio.h>
#include <string.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	// Initialize variables
	char str[] = "hello";
	char* addr = (char*) 0x7ffdc0da4efe;

	// Print initial value of the address
	printf("Initial value at %p: %s\n", addr, addr);

	// Change value of the address
	strcpy(addr, str);

	// Print updated value of the address
	printf("Updated value at %p: %s\n", addr, addr);

	return (0);
}
