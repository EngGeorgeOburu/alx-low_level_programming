#include <stdio.h>
/*  main - Entry point of the program */

/* Results: Always 0 (success) */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		
	}
	while (c = 'A' && c <= 'Z');
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
