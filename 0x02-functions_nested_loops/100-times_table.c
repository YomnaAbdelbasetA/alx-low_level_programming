#include "main.h"
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
					_putchar(res + '0');
				}
				else if (res > 9)
				{
					int a, b, c;

					if (res <= 99)
					{
						a = res % 10;
						b = res / 10;
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(b + '0');
						_putchar(a + '0');
					}
					else if (res > 99)
					{
						a = res % 10;
						b = (res / 10) % 10;
						c = res / 100;
						_putchar(',');
						_putchar(' ');
						_putchar(c + '0');
						_putchar(b + '0');
						_putchar(a + '0');
					}
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
			}
			_putchar('\n');
		}
	}
}
