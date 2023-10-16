#include "main.h"
#include <string.h>
/**
 * main - Entry point of the program.
 *
 * void puts_half - The function prints half of a string.
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = strlen(str);
	int n = (length_of_the_string - 1) / 2;
											for (i = n; i < length_of_the_string; i++)
											{
											_putchar(str[i]);
											}
											_putchar('\n');
}	
	
