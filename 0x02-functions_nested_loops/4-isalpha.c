#include "main.h"
/**
 * Description:program checks the alphabet character
 * the chracter being is c
 *
 * Return:Always 1 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
