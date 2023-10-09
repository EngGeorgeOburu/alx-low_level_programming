#include <stdio.h>
/* Main - Entry point of the program */

/* Description: A program that prints a combination of three digits */

/* Return: Always 0 (success) */
int main(void)
{
	int num1, num2, num3;
		for (num1 = 0; num1 < 10; num1++)
		{
			for (num2 = 0; num2 < 10; num2++)
			{
				for (num3 = 0; num3 < 10; num3++)
				{
		if (i != num1 && i != num2 && i != num3 && num1 != num2 && num1 != num3 && num2 != num3)
		{
			putchar(i + '0');
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(num3 + '0');
			putchar(',');
			putchar(' ');
		}
				}
			}
		}
		return (0);
}
