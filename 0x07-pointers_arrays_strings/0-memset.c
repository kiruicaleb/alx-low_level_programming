#include "main.h"

/**
 * _memset - Function filling memory with a constant byte
 * @s: Pointer to memory
 * @b: Constant byte
 * @n: Number of bytes
 * Return: Pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
