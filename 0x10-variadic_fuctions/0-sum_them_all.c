#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * sum_them_all - return the sum of all its parameters
 * @n: The number parameter
 * Return: Sum**/
int sum_them_all(const unsigned int n, ...)
{
	size_t i = 0;
	int sum = 0;
	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	while (i < n )
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
