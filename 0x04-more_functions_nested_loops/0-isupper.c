#include "main.h"
/**
 * _isdigit - a function that checks if number is a digit
 * @c: the character to be checked
 * Return: 1 if c is digit or 0 otherwise
 */

int _isdigit(int c)
{
	int f;

	if (char(c) >= 48 && char(c) <= 57)
	{
		f = 1;
	}
	else
	{
		f = 0;
	}
return (f);
}
