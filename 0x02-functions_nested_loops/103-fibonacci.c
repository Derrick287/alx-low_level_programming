#include<stdio.h>
/**
 * main-print fibo numbers
 * Return:0 is success
 */
int main(void)
{
	unsigned long int sm, a, b, sum;

	sum = 1;
	a = 1;
	b = 1;
	while (b <= 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sm += sum;
	}
	printf("%ld\n", sm);
	return (0);
}
