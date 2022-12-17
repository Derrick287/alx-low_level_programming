#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int cur, next, i, num, prev;

	cur = 1;
	prev = 0;
	i = 1;
	num = 50;
	while (i <= num)
	{
		next = cur + prev;
		printf("%ld", next);
		if (i == 50)
		{
			break;
		}
		printf(", ");
		prev = cur;
		cur = next;
		i++;
	}
	printf("\n");
	return (0);
}
