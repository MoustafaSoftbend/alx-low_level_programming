#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
	int i;

	for (i = n; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
