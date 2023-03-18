#include <stdio.h>
/**
 * main - A prgram that prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;
	int a = 97;

	while (i <= 57)
	{
		putchar((int)i);
		i++;
	}
	while (a <= 102)
	{
		putchar((char)a);
		a++;
	}
	putchar('\n');
	return (0);
}
