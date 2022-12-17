#include <main.h>

/**
 * main - Entry point
 *
 * Description: Finds the sum of all
 *		multiples of 3 or 5
 *		< 1024
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum, n;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
