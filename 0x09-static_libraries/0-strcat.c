#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - The function concatenates two strings.
 * @src: append string from.
 * @dest: append string to.
 * Return: Always dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
