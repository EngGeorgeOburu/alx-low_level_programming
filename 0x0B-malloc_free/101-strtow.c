#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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

	if (str == NULL || str == "")
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
		word[i] = word;
		word = strtok(NULL, " ");
	}
	word[i] = NULL;
	return (word);
}

