#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: program prints letters except q and e
 * Return:Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
