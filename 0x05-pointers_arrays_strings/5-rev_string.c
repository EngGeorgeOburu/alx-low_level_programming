#include "main.h"
#include <string.h>
/**
 * void rev_string - The function.
 *
 * @s: input string.
 *
 * Return:String in reverse.
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int start_of_string = 0;
	int end_of_string = len - 1;
	int i;

	while (start_of_string < end_of_string)
	{
		char temp = s[start_of_string];
		s[start_of_string] = s[end_of_string];
		s[end_of_string] = temp;
		start_of_string++;
		end_of_string--;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
