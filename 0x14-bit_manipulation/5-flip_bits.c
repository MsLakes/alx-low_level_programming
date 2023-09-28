#include "main.h"

/**
 * flip_bits - Calculates the number of bits to be modified 
 * to transition from one number to another.
 * @n: Initial number.
 * @m: Target number.
 *
 * Return: The count of bits that need alteration.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bitsToChange = 0;
	unsigned long int bitState;
	unsigned long int difference = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bitState = difference >> i;
		if (bitState & 1)
			bitsToChange++;
	}

	return (bitsToChange);
}
