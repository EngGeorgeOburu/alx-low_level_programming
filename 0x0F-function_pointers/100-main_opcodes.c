#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 */
int main(int argc, char *argv[])
{
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	int bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit (2);
	}
	array = malloc(bytes);
	if (!array)
	{
		printf("Error\n");
	}
	int i = 0;

	for (i = 0; i < bytes; i++)
		{
			printf("%02hhx\n", array[i]);
		}
		printf("%02hhx ", array[i]);
		free (array);
		return (0);
}
