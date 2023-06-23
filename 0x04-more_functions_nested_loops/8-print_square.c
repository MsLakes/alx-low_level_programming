#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)

{

	int k, n;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (k = 0; k < size; k++)
	{
	for (n = 0; n < size; n++)
	{
	_putchar(55);
	}
	_putchar('\n');
	}
	}
}
