#include "main.h"
/**
 * main - Entry point of the program
 * _isupper:functions checks for the uppercase letter
 * @c:char to check
 * Return:Always 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
