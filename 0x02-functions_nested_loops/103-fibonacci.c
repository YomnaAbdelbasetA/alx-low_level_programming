#include <stdio.h>
/**
 * main - a program that prints the sum of fibonacci even values
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long x = 0, y = 1, fib_sum = 0, even_sum = 0;

	for (i = 0; fib_sum <= 4000000; i++)
	{
		fib_sum = x + y;
		if (fib_sum % 2 == 0)
		{
			even_sum += fib_sum;
		}
		x = y;
		y = fib_sum;
	}
	return (0);
}
