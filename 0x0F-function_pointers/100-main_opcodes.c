#include <stdio.h>
<<<<<<< HEAD
/****/
int main(int argc, char *argv[])
{
	int bytes;
	char *array;
	bytes = atoi(argv[1]);
=======
#include <stdlib.h>
/**
 * main - Entry point of the program
 */
int main(int argc, char *argv[])
{
	char *array;
>>>>>>> 0b976adb61d78e29673618a8021858aed7394095

	if (argc != 2)
	{
		printf("Error\n");
<<<<<<< HEAD
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
=======
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
>>>>>>> 0b976adb61d78e29673618a8021858aed7394095
}
