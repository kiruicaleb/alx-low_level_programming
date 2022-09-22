#include "main.h"

/**
 * string_touper - Function to convert lowercase characters to uppercase
 * @s: Pointer to a string
 * Return: Pointer to uppercae string
 */

char *string_touper(char *s)
{
	int idx;

	for (idx = 0; s[idx]; idx++)
	{
		if (s[idx] >= 'a' && s[idx] <= 'z'')
		{
			s[idx] -= 32;
		}      
       	} 
	return (s);
}
