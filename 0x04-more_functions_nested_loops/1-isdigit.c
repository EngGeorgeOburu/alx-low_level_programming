#include "main.h"
/**
 * _isdigit - This function checks for a digit from 0 to 9.
 *
 * @c: The char being checked.
 *
 * Return:Always 0 or 1
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
