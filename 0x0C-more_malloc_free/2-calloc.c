#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for array using malloc
 * @nmemb: Int for number of elements in the array
 * @size: Int for size of each element in array
 * Return: Pointer value to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (idx = 0; idx < (nmemb * size); idx++)
		*(arr + idx) = 0;
	return ((void *)arr);
}

