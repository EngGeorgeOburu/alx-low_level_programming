#include "main.h"
#include <string.h>
/**
 * void rev_string - The function that reverses a string.
 *
 * @s: input string.
 *
 * Return:String in reverse.
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
