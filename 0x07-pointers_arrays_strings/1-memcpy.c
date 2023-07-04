#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Entry point
 * @dest: input memory area
 * @src: input
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	
	return(dest);
}
