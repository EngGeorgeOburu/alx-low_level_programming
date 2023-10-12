#include "main.h"
/**
 * _islower:checking lower case characters
 * Description:program checking lower case
 * @c:this is the character to be checked
 * Return:Always 1 (success)
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);

		return (0);
}
