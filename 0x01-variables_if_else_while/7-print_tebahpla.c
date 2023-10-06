#include <stdio.h>
/* main - Entry point of program */

/* Result:Always 0 (success) */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	return (0);
}
