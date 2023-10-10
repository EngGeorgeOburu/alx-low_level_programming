#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints lowercase alphabets
 * Return:Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
