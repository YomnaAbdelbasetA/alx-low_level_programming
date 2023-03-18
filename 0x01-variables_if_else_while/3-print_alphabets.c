#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercasr then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	int lowercase = 97;
	int uppercase = 65;

	while (lowercase <= 122)
	{
		putchar((char)lowercase);
		lowercase++;
	}
	while (uppercase <= 90)
	{
		putchar((char)uppercase);
		uppercase++;
	}
putchar('\n');
	return (0);
}
