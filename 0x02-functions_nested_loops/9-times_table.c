#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			res = i * j;
			_putchar(res + '0');
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
