#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that initializes an array with specific character
 * @size: Unsigned int for the array size
 * @c: Character to initialize
 * Return: Pointer to an array, NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}

