#include "main.h"
/**
 * _isalpha - program checks the alphabet character
 * @c:the characcter being is c
 *
 * Return:Always 1 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
