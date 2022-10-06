#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 *
 * @b :Int for memory to be aloocated
 * Return: Pointer value to allocated memory, otherwise 98
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

