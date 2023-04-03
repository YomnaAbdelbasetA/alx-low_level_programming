#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 * @dest: the memory area to be copied the other string to
 * @src: the memory area to to be copied from
 * @n: the size of the new string
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
