#include <stdio.h>
/**
 * main - Entry point
 * Description:prints 50 fibonacci numbers
 * Return:Always 0 (success)
 */
int main(void)
{
	int count = 50;
	int n;
	unsigned long long fibo1 = 0; fibo2 = 1; total;

	for (n = 0; n < count; n++)
	{
		total = fibo1 + fibo2;
		printf("%llu", total);

		fibo1 =fibo2;
		fibo2 =total;

		if(n == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}

