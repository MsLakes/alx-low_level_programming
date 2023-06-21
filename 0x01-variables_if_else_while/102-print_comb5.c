#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, n;

	for (k = 0; k < 100; k++)
	{
	for (n = 0; n < 100; n++)
	{
	if (k < n)
	{
	putchar((k / 10) + 48);
	putchar((k % 10) + 48);
	putchar(' ');
	putchar((n / 10) + 48);
	putchar((n % 10) + 48);
	if (k != 98 || n != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
