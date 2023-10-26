#include "main.h"
/**
 * is_prime_number - checks for prime number.
 * @n: input parameter.
 * Return: return 1 is prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int factor = 0;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((int)(factor * factor > n))
	{
		return (1);
	}
	if (n % factor == 0)
	{
		return (0);
	}
	return (is_prime_number(n));
}
