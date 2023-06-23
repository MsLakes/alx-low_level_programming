#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according parameter
 * @n: The number of times to print diagonal lines
 * Return: 0
 */

void print_diagonal(int n)

{

	int k, l;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
	for (l = 0; l < k; l++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
