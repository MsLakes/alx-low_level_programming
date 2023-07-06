#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Count the string
 * Return: the valie of the integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	s++;
	return(_strlen_recursion(s) + 1);
}
