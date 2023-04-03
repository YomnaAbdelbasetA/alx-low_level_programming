#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by
 *  s with the constant byte b
 *  @s: pointer to the starting address to the memory to be filled
 *  @b: value to be filled with
 *  @n: number of bytes to be filled with value b
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
