#include "main.h"

/**
 * _strcpy - Program to add a string at the end of another string
 * @dest: Pointer to string to be copied to
 * @src: Pointer to string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
