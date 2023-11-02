#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two string
 * @n: number of bytes to allocate
 * @s1: String one to concatenate
 * @s2: String two to concatenate
 * Return: Pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int concat_len = strlen(s1) + n + 1;
	char *concat = malloc(concat_len);

	if (concat == NULL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	memcpy(concat, s1, strlen(s1));
	memcpy(concat + strlen(s1), s2, n);
	concat[concat_len - 1] = '\0';
	return (concat);
}
