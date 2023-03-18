#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercasr then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	int lowercase = 97;
	int uppercase = 65;

	while (lowercase <= lowercase + 26)
	{
		putchar((char)lowercase);
		lowercase++;
	}
	while (uppercase <= uppercase + 26)
	{
		putchar((char)uppercase);
		uppercase++;
	}
putchar('\n');
	return (0);
}
