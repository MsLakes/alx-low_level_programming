#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */

void puts2(char *str)

{

	int k;
	int n = 0;

	while (str[n] != '\0')
	{
	n++;
	}

	for (k = 0; k < n; k += 2)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
