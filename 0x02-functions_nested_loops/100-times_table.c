#include "main.h"
#include <stdio.h>
/**
 * print_times_table - a function that prints the n times table
 * @n: the number to print the times table of it
 * Return: 0
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, res;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
				{
					printf("%d", res);
				}
				else if (res > 9)
				{
					if (res <= 99)
					{
						printf(",  %d", res);
					}
					else if (res > 99)
					{
						printf(", %d", res);
					}
				}
				else
				{
					printf(",   %d", res);
				}
			}
			printf("\n");
		}
	}
}
