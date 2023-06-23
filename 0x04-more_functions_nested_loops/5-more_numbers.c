#include <stdio.h>
#include "main.h"


/**
 * more_numbers - Print 10 times the numbers from 0 up to 14
 * Return: 10 times of the numbers from 0 up to 14
 */

void more_numbers(void)

{

	int k, n;

	for (k = 0; k < 10; k++)
	{
	for (n = 0; n <= 14; n++)
	{
	if (n > 9)
	{
	_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
