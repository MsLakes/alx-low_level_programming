#include "main.h"

/**
 * print_binary - Displays the binary form of a given decimal number.
 * @n: Decimal value to be represented in binary.
 */

void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int tempBit;

	for (i = 63; i >= 0; i--)
	{
		tempBit = n >> i;

		if (tempBit & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (!flag)
	{
		_putchar('0');
	}
}
