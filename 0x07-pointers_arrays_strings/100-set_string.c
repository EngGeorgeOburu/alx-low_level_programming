#include "main.h"
/**
 * set_string - sets  value of a pointer to char.
 * @s: Pointer to a pointer to the char to be set.
 * @to: The pointer to the new value to be set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
