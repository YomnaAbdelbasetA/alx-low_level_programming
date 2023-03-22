#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer.
 * @n:  the number to compute the absolute value of it
 * Return: absolute value of a nmuber
 */
int _abs(int n)
{
	int abs = n;

	if (n < 0)
	{
		abs = n * -1;
	}
	return (abs);
}
