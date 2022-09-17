#include <stdio.h>
/**
 * main - prints sum of even fibonacci
 * suit elements
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
	int one = 0, two = 1, sum = 0, next = 0;

	while (next < 4000000)
	{
		next = one + two;
		one = two;
		two = next;
		if ((next % 2) == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
