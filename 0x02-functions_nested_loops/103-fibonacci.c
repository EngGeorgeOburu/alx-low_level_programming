#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:program prints the sum of even -valued terms
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;
	unsigned long long int m = 1;
	unsigned long long int p = 2;
	unsigned long long int next, total;

	for (n = 1; n <= 33; n++)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			total = total + m;
		}
		next = m + p;
		m = p;
		p = next;
	}
	printf("%llu\n",total);
	return (0);
}	
