#include <stdlib.h>
#include <time.h>
/* main - Entry point for the program */

/* This is a program assigning random value to a variable and determines if it is positive and negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
		printf(" %d is positive \n", &n);
	}
	else if (n < 0)
	{
		printf(" %d is negative \n", &n);
	}
	else
	{
		printf(" %d is zero \n", &n);
	return (0);
}
