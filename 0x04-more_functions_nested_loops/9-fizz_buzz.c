#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description:prints numbers from 1 to 100 but for multiples of
 *
 * three prints fizz and Buzz for multiples of five.
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 3 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 != 0 && num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num == 1)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	return (0);
}

