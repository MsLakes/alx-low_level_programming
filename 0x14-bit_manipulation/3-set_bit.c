#include "main.h"

/**
 * set_bit - Modifies a specific bit to 1 at the designated index.
 * @n: Pointer to the number undergoing modification.
 * @index: Position of the bit to be adjusted to 1.
 *
 * Return: 1 if successful, -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
