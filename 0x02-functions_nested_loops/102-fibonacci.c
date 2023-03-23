#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long x = 0, y = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		if (i != 49)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);
		}
		x = y;
		y = sum;
	}
	return (0);
}
