#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:program printing different combination of two digits
 * Return:Always 0 (success)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
