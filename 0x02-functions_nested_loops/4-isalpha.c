#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the chracter to be checked
 * Return: 1 if it's a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
