#include "main.h"
/**
 * print_times_table:program prints n times tables, starting from 0
 * @n:defines the number of the times tables
 *
 */
void print_times_table(int n)
{
	int p, q, r;

	for (n >= 0 && n <= 15)
	{
		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				r = q * p;
				if (q == 0)
				{
					_putchar(k + '0');
				}
				else if (r < 10 && q != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (r >= 10 && r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar(r % 10) + '0');
				}
				else if (r >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
