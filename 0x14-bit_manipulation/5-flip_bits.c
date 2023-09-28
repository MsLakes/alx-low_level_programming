#include "main.h"

/**
 * flip_bits - Determines the number of bits needed to flip
 *             to transform one number to another.
 * @n: The original number.
 * @m: The number to transform into.
 *
 * Return: The count of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bitsToChange = 0;
	unsigned long int bitState;
	unsigned long int difference = n ^ m;

	for (i = 63; i > 0; i--)
	{
		bitState = difference >> i;
		if (bitState & 1)
			bitsToChange++;
	}

	return (bitsToChange);
}
