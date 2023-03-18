#include <stdio.h>
/**
 *  main - a program that prints all the alphabet in lowercase
 *  Return: 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar((char)i);
		i++;
	}
	putchar('\n');
	return (0);
}
