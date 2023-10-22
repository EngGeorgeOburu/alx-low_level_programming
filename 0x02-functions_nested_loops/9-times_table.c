#include "main.h"
/**
 * Description:program print 9 times table starting from 0
 */
void times_tables(void)
{
	int m;
	int n;
	int p;

	for (m = 0;m < 10;m++)
	{
		for (n = 0;n < 10;n++)
		{
			p = m*n;
			if (n == 0)
			{
				_putchar(p + '0');
			}
			if (p < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
