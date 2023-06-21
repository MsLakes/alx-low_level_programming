#include <stdio.h>
/**
 * main - Create the sum of Even fibonacci numbers
 * less than 4000000
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, kam = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	kam += k;
	j = k - j;
	++i;
	}
	printf("%ld\n", kam);
	return (0);
}
