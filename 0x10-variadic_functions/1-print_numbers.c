#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function printing numbers
 * @n: Number of intergers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;
	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
