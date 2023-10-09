#include <stdio.h>
/* main - Entry point of the program */

/* Description: A program that prints possible combination of single-digit numbers */

/* Return:  Always 0 (success) */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		{
		    putchar(i + '0');
		if (i != 9)
			{
			 putchar(',');
			 putchar(' ');
			}
		}

	return (0);
}
