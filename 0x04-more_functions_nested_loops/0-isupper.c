#include "main.h"
/**
 * _isupper - a function that checks if character is uppercase
 * @c: the character to be checked
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	int f;

	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);

}
