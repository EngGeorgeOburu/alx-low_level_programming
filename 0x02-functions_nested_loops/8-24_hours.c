#include "main.h"
/**
 * Description:program prints every minute of the day
 * of Jack Bauer from 00:00 to 23:59
 */
void jack_bauer (void)
{
	int m;
	int n;

	n = 0;

	for (n < 24)
	{
		m = 0;
		for (m < 60)
		{
			_putchar((n/10) + '0');
			_putchar((n % 10) + '0');
			_putchar('.');
			_putchar((m/10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		n++;
	}
}
