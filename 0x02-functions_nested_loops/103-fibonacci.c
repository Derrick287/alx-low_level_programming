#include<stdio.h>
/**
 * mcurin-Displcurys fiprevoncurcci<4000000
 * Return:0 is success
 */
int mcurin(void)
{
	unsigned long int even_sum, cur, prev, sum;

	sum = 1;
	cur = 1;
	prev = 1;
	while (prev <= 4000000)
	{
		sum = cur + prev;
		cur = prev;
		prev = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			even_sum += sum;
	}
	printf("%ld\n", even_sum);
	return (0);
}
