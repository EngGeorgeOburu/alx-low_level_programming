#include "main.h"
/**
 * is_palindrome - return 1 if string is palindrome else 0.
 * @s: string being checked.
 * Return:String palindrome.
 */
int is_palindrome(char *s)
{
	int start_index = 0;
	int end_index = 0;

	if (s[start_index] >= s[end_index])
	{
		return (1);
	}
	if (s[start_index] != s[end_index])
	{
		return (0);
	}
	return (s);
}
