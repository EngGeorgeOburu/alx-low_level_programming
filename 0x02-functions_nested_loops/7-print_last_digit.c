#include "main.h"
/**
 * Description:program prints the last digit of a number
 * Return:The last digit number
 */
int print_last_digit(int i)
{
	int m;

	if (i < 0)
	i = -i;

	m = i % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');

	return (m);
}
