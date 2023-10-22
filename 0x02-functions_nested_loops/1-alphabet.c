#include <stdio.h>
/**
 * main - Entry poitn of the program
 * print_alphabet: a function that prints alphabet in lowercase
 * Return:Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
/**
 * print_alphabet - a function that prints alphabet in lowercase
 * @c: input charaacter
 */
