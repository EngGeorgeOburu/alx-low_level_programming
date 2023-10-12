#include "main.h"
/**
 * main -Entry point of the program
 * Description:program natural  numbers from n to 98
 */
void print_to_98(int n)
{
	int m;
	int p;
	
	if (n <= 98)
	{
		for (m = n;m <= 98;m++)
		{
			if(m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d, ", m);
		}
	}
	else if (n >= 98)
	{
		for (p = n;p <= 98;p--)
		{
			if (p != 98)
				printf("%d, ", p)
			else if (p == 98)
				printf("%d, ", p)
		}
	}
}
