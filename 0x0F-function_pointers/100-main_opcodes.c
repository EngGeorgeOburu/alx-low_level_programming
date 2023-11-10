#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * @argc - argument to pass
 * @argv - array of argument
 */
int main(int argc, char *argv[])
{
	int bytes;
	char *array = (char *)malloc(bytes);

	bytes = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	int i = 0;
	while (i < bytes)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		else
		{
			printf("%02hhx ",array[i]);
		}
		i++;
	}
	free (array);
	return (0);
}
