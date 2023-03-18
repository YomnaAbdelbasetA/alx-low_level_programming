#include <stdio.h>
/**
 * main - A prgram that prints all possible combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57)
			{
				putchar((int)i);
				putchar((int)j);
				putchar((int)k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
