#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: prints first 98 fibonnacinumbers
 * Return:Always 0 (success)
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 1;
	unsigned int sum;
	int n;

	printf("%u, %u, fib1, fib2");
	{
	for (n = 0; n <= 98; n++)
		sum = fib1 + fib2;
	printf(", %u". sum);
	fib1 = fib2
	fib2 = sum;
}
printf("\n");
return(0);
}
