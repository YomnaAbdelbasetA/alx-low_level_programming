#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 1, sum = 0, i = 0;

	printf("%d, %d", x, y);
	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		if (i != 49)
		{
			printf("%d, ", sum);
		}
		else
		{
			printf("%d\n", sum);
		}
		x = y;
		y = sum;
	}
	return (0);
}
