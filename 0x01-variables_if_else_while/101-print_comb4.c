#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, n, l;

	for (k = '0'; k < '9'; k++)
	{
	for (n = k + 1; n <= '9'; n++)
	{
	for (l = n + 1; l <= '9'; l++)
	{
	if ((k != n) != l)
	{
	putchar(k);
	putchar(n);
	putchar(l);
	if (n == '7' && k == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}