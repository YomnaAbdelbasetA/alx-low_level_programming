#include <stdio.h>
/**
 * main - A prgram that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	int lower = 122;

	while (lower >= 97)
	{
		putchar((char)lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
