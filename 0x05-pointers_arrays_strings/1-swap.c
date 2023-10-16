#include "main.h"
#include <stdio.h>
/**
 * main -Entry point of the program
 *
 * void swap_int - Swaps the values of two intergers.
 *
 */
void swap_int(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
