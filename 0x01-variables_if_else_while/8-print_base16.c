#include <stdio.h>
/* main - Entry point of the program */

/* Description: A program that prints all the numbers of base 16 in lowercase */

/* Return: Always 0 (success) */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 16; i++)
	{
	if (i <  10)
	{
		c = i + '0';
	}
	else
	{
		c = i - 10 + 'a';
	}
	putchar(c);
	}

	putchar('\n');
	return (0);
}
