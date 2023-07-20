#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (k < n)
		{
			printf("%d", va_arg(args, int));

			if (k != n - 1  && separator != NULL)
				printf("%s", separator);

			k++;
		}
		va_end(args);
	}
	printf("\n");
}
