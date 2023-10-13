#include <stdio.h>
#include <math.h>
/*
 * main - Entry
 * Description:prints the largest prime factor of a number
 * Return:Always 0 (success)
 */
int main(void)
{
	long int num = 612852475143;
	long int n;
	long int max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		n = /= 2;
	}
	for (n = 3; n <= sqrt(num); n = n + 2)
	{
		while (num % n == 0)
		{
			max = n;
			num = num/n;
		}
	}
	if (num > 2)
		max = num;
	printf("%ld\n", max);
	return (0);
