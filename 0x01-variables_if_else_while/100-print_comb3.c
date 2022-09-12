#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a1 = 0, a2;
	while(a1 <= 9)
	{
		a2 = o;
		while(a2 <= 9)
		{
			if (a1 != a2 && a1 < a2)
			{
				putchar(a1 + 48);
				putchar(a2 + 48);

				if (a1 + a2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++a2;
		}
		++a1
	}
putchar('\n');
return(0);
}
