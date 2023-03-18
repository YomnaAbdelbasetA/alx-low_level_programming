#include <stdio.h>
/**
 * main - A prgram that prints all possible combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar((int)i);
			putchar((int)j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
