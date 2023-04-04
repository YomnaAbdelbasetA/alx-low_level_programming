#include "main.h"
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
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
		return (NULL);
}
