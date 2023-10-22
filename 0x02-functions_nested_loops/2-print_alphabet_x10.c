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
void print_alphabet_x10(void)
{
	char i;
	int n;
	for (i = 'a';i <= 'z';i++)
	{
		for (n = 0; n < 10; n++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
