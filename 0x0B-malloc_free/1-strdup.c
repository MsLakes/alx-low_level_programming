#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a new string which is a duplicate of the string
 * @str: the string to duplicate
 *
 *Return: The duplicated string
 *
 */
char *_strdup(char *str)
{
	int a = 0, k = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[k])
	{
		k++;
	}

	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);

	while (a < k)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
