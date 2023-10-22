<<<<<<< HEAD
#include <stdio.h>
/**
 * main - Entry poitn of the program
 * Description:a function that prints alphabet in lowercase
 * Return:Always 0 (success)
 */
int main()
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
=======
#include "main.h"
/**
 * print-alphabet - prints all alphabets in lower case
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
>>>>>>> origin/master
}
