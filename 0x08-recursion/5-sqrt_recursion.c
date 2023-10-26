#include "main.h"
/**
 * _sqrt_recursion - prints the natural squareroot of a number.
 * @n: input number.
 * Return: The squareroot of an interger.
 */
int _sqrt_recursion(int n)
{
	int numb = 1;
	
	if (numb * numb > n)
	{
		return (-1);
	}
	if (numb * numb == n)
	{
		return (numb);
	}
	numb++;
	return (_sqrt_recursion(n));
}
