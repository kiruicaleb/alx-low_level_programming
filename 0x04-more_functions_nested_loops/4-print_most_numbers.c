#include "main.h"

/**
 * print_most_numbers
 *
 * Return: 0 for success
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num == 50 || num == 52)
			continue;
		else
			_putchar(num);
	}
	putchar('\n');
}
