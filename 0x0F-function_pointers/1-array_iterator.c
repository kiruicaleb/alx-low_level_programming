#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes a function in an element of an array
 *
 * @array: Pointer to array location
 * @size: Size of the array
 * @action: Pointer to function usedReturn: Void
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array && action)
	{
		for (idx = 0; idx < size; idx++)
			action(array[idx]);
	}
}
