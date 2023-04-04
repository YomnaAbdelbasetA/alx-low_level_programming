#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strchr - a function that returns a pointer to the first occurrence of the
 *  character c in the string s, or NULL if the character is not found
 * @s: the string to search for character occurence in it
 * @c: the charcter to search for
 * Return: pointer to the first occurence of character c or NULL if not
 * found
 */
char *_strchr(char *s, char c)
{
	int sz, i = 0;

	for (sz = 0; s[sz] != '\0'; ++sz);

	for (i = 0; i < sz; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if(i != sz)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
	
}
