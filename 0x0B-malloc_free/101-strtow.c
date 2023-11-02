#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - Function split strings into words
 * @i: interger variable
 * @word: split words
 * Return word.
 */
char **strtow(char *str)
{
	int i = 0;
	char **word = malloc(sizeof(char *) *100);

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
	if (word == NULL)
	{
		return (NULL);
	}
	while (i < 100)
	{
		word[i] = NULL;
		i++;
	}
	for (; word != NULL; i++)
	{
		word[i] = * word;
		word = strtow(NULL);
	}
	word[i] = NULL;
	return (word);
}

