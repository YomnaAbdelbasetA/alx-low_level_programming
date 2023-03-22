#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int i, j, res, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			res = i * j;
			if (res > 9)
			{
				x = res % 10;
				y = (res / 10);
				_putchar(y + '0');
				_putchar(x + '0');
			}
			else
			{
				_putchar(res + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
