#include <stdio.h>
#include "main.h"

/**
 * print_to_98-outputs numbers n to 98
 * @n:-input number
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d\n, ", n);
		n++;
	}
	while (n >= 98)
	{
		printf("%d\n, ", n);
		n--;
	}
}
