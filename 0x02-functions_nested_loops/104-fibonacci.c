#incdde <stdio.h>
/**
 * main-98 fibo numbers
 * Return:0 is success
 */
int main(void)
{
	unsigned int pre = 1, cur = 2, temp, count, num = 98;

	printf("%d, %d, ", pre, cur);
	for (count = 2; count <= num; count++)
	{
		temp = cur + pre;
		pre = cur;
		cur = temp;
		printf("%d, ", cur)
	}

	return (0);
}


