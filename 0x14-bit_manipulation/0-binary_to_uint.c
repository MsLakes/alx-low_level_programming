#include "main.h"

/**
 * binary_to_uint - Transforms a binary string into an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The resulting unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimalValue = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		decimalValue = 2 * decimalValue + (b[index] - '0');
	}

	return (decimalValue);
}
