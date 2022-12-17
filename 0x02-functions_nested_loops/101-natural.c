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
	int i;
	unsigned long febonacci1 = 0, febonacci2 = 1, sum;

	for (i = 0; i < 50; ++i)
	{
		sum = febonacci1 + febonacci2;
		printf("%lu", sum);

		febonacci1 = febonacci2;
		febonacci2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
