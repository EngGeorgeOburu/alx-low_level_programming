#include "main.h"
#include <string.h>
/**
 * void rev_string - The function.
 *
 */
void print_rev(char *s)
{
	int len = str(s);
	int start_of_string = 0;
	int end_of_string = len - 1;

	while (start_of_string < end_of_string)
	{
		char temp = str[start_of_string];
		str[start_of_string] = str[end_of_string];
		str[end_of_string] = temp;
		start_of_string++;
		end_of_string--;
	}
}
