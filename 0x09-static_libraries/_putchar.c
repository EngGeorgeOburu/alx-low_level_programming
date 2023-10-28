#include "main.h"
#include <unistd.h>
/**
 * main - Entry point of the program
 * Description: _putchar writes the c character to stdout
 * @c: The charcater being printed
 * Return:Always 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

