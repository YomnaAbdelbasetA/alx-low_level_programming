#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, spaces, ch;

	for (i = 1; i <= size; i++)
	{
		for (spaces = size - 1; spaces >= i; spaces--)
		{
			_putchar(' ');
		}
		for (ch = 1; ch	<= i; ch++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
