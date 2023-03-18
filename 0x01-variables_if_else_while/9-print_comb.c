#include <stdio.h>
/**
 * main -A prgram that prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		putchar((int)i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
