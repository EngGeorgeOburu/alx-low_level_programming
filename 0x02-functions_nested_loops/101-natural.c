#include <stdio.h>
/**
 * main - Entry of the program
 * Description:prints sum of multiples of 3 and 5 
 * below 1024
 * Return:Always 0 (success)
 */
int main(void)
{
	int num, sum;
	int MAX = 1024;
	
	for (num = 0; num < MAX; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n",sum);
	return (0);
}
