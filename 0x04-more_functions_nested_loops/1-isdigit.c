#include "main.h"
/**
 * main - entry point of the program
 * _isdigit:Checks for a digit from 0 to 9
 * Return:Always 0 (success)
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
		return (0);
	return (1);
}
