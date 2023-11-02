#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 * @i: interger variable
 * @string: new string parameter
 * @ac: command line argument
 * @av: array of command line argument
 * Return: string.
 * **/
char *argstostr(int ac, char **av)
{
	char * string = malloc(sizeof(char) * 2);
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcat(string, av[i]);
		printf("\n");
	}
	return (string);
}
