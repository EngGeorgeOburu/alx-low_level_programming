#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes character c to stdout.
 *
 * @c: Character being printed.
 *
 * on error, -1 is returned and no error is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
