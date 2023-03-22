#include <stdio.h>
/**
 * main - a program that computes the sum of 3 and 5 multiplies
 * Return: 0
 */
int main(void)
{
	int i = 1, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
