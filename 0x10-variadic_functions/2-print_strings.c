#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int k = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (k < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (k != n - 1 && separator != NULL)
				printf("%s", separator);

			k++;
		}

		va_end(args);
	}

	printf("\n");
}
