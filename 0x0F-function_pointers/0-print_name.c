#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints out a name
 * @f: function to prit name
 * @name: The name being printed
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
