#include <stdio.h>
#include <string.>
#include "msin.h"

/**
 * print_rev - prints string in reverse
 * @s: string to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
