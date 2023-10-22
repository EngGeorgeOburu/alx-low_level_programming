<<<<<<< HEAD
#include <stdio.h>
/**
 * main - Entry point of the program
 * Description:program printing 10x the alphabet
 * Return:Always 0 (success)
 */
int main()
{
	print_alphabet_x10();
}
=======
#include "main.h"
/**
 * print_alphabet_x10:prints 10x alphabets in lower case
 */
>>>>>>> origin/master
void print_alphabet_x10(void)
{
	char i;
	int n;
<<<<<<< HEAD
	for (i = 'a';i <= 'z';i++)
	{
		for (n = 0; n < 10; n++)
		{
			putchar(i);
		}
		putchar('\n');
=======

	for (i = 'a'; i <= 'z'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar(i);
		}
		_putchar('\n');
>>>>>>> origin/master
	}
}
