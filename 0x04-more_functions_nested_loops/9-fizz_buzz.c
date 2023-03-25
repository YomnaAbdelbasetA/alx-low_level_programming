#include <stdio.h>

/**
 * main - a program to print numbers from 1 to 100, but if the number is
 * divisible by 3 print Fizz, if the number is divisible by 5 print Buzz
 * and if it's divisible by both of 3 and 5 print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}

	}
	printf('\n');
	return (0);
}
