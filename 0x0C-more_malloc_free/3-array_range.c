#include "main.h"
#include <stdlib.h>

/**
  * array_range - Function thta creates an array of integers
  *
  * @min: Int of minimum value 
  * @max: Int of maximum value
  * * Return: Pointer value to new array
  */

int *array_range(int min, int max)
{
	int *arr, idx, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);

	if (arr == NULL)
		return (NULL);
	for (idx = 0; idx < range; idx++)
		*(arr + idx) = min + idx;
	return (arr);
}
