#include "main.h"
#include <stdio.h>
/**
 * main -Entry point of the program.
 * Return 0 Always.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
