#include "main.h"

/**
 * get_endianness - Determines the endianness of a machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int testValue = 1;
	char *bytePointer = (char *) &testValue;

	return (*bytePointer);
}
