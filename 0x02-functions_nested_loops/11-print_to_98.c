#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints numbers from n to 98
 * @n: the number to print numbers from it to 98
 * Return: 0
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		putchar('\n');
	}
}
