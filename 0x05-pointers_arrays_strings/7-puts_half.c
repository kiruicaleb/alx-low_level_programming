#include <stdio.h>
#include "main.h"

/**
 * puts_half -  prints half a line of strings
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++;
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - prints length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
