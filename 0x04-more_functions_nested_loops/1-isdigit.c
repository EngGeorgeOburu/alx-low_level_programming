#include "main.h"
/**
 * main - entry point of the program
 * _isdigit:Checks for a digit from 0 to 9
 * @c:thechar being checked
 * Return:Always 0 or 1
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
		return (1);
	return (0);
}
