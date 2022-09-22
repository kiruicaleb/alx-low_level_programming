#include "main.h"

/**
 * string_touper - Function to convert lowercase characters to uppercase
 * @s: String to be changed
 *
 * Return: Address to the string
 */

char *string_touper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z'')
			s[idx] -= 32;
		i++;
	}
	return (s);
}
