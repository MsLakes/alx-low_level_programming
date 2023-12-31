#include "main.h"
#include <stdio.h>

/**
 *_strcat - Concatenates two strings
 *@dest: The destination string
 *@src: The source string
 *Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int kab = 0, i;

	while (dest[kab])
	{
		kab++;
	}


	for (i = 0; src[i] != 0; i++)
	{
		dest[kab] = src[i];
		kab++;
	}

	dest[kab] = '\0';
	return (dest);
}
