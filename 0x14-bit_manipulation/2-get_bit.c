#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specific index from a number.
 * @n: The number being examined.
 * @index: Position of the bit.
 *
 * Return: The bit's value at the specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
