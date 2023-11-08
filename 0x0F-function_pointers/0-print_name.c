#include <stdio.h>
#include "function_pointers.h"
/**
 * void print_name - Prints out a name
 * @name: Name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}