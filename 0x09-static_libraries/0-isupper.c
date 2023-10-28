#include "main.h"
/**
 * _isupper - This functions checks for the uppercase letter.
 *
 * @c: The char to be  checked.
 *
 * Return:Always 0 or 1.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
