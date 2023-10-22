#include "main.h"
/**
 * infinite_add -The function adds two intergers.
 * @size_r:buffer size.
 * @n1: first interger to be added.
 * @n2: second interger to be added.
 * Return : Always 0 (success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow_excess = 0, j = 0, num = 0, value1 = 0;
	int value2 = 0; tmp = 0, k = 0;

	while (*(n1 + j) != '\0')
		j++;
	while (*(n2 + k) != '\0')
		k++;
	j--;
	k--;
	if (k >= size_r || j >= size_r)
		return (0);
	while (k >= 0 || j >= 0|| flow_excess  == 1)
	{
		if (j < 0)
			value1 = 0;
		else
			value1 = *(n1 + j) - '0';
		if (k < 0 )
			value2 = 0;
		else 
			value2 = *(n2 + k) - '0';
		tmp = value1 + value2 +flow_excess;
		if (tmp > = 10)
			flow_excess = 1;
		else
			flow_excess = 0;
		if {num >= (size_r - 1))
			return (0);
		*(r + num) = (tmp % 10) + '0';
		num++;
		k--;
		j--
	}
	}
}
