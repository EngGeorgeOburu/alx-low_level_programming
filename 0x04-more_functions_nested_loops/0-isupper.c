#include "main.h"
/**
 * main - Entry point of the program
 * Description:_isupperfunctions checks for the
 *uppercase character
 * @c:char to check
 * Return:Always 0 (success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
