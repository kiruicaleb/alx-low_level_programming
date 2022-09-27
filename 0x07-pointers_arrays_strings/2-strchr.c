#include "main.h"

/**
 * strchr - Function to locate a character in a string
 * @s: Pointer to a string
 * @c: Character
 * Return: Pointer to the first occurence of char c
 * NULL if character c is not in string s
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (0);
}

