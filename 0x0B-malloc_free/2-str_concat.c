#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: he two strings concatenate
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, i = 0, e = 0, l = 0;
	char *s;
	
	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";
	
	while (s1[a])
		a++;

	while (s2[i])
		i++;

	l = a + i;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	while (e < l)
	{
		if (e <= a)
			s[e] = s1[e];

		if (e >= a)
		{
			s[e] = s2[i];
			i++;
		}

		e++;
	}

	s[e] = '\0';
	return (s);
}
