#include "main.h"

/**
 * clear_bit - Modifies the value of a specific bit to 0.
 * @n: Pointer to the number to be altered.
 * @index: Position of the bit to be set to 0.
 *
 * Return: Returns 1 on success, and -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
