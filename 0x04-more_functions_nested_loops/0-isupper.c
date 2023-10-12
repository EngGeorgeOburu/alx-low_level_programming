#include "main.h"
/**
 * main - Entry point of the program
 * _isupper: checks for the uppercase character
 * Return:Always 0 (success
 */
int _isupper(int c)
{
	if (c == 'a' && c <= 'z')
		return (0);
	return (1);
}
