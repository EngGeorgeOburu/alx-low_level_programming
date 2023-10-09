#include <stdio.h>
/* Main -Entry point of the program */

/* Description: A program that prints all possible combination of two-digit numbers */

/* Return: Always 0 (success) */
int main(void)
{
	int i, num1, num2;

	for (i = 0; i < 100; i++)
	{
		for (num1 = 0; num1 < 100; num1++)
		{
			for (num2 = 0; num2 < 100; num2++)
			{

				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	if (num1 != 98 || num2 != 99)
	{
		putchar(' ');
		putchar(',');
	}
	return (0);
}
