#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 * @sum: The total of inputs.
 * @i: input parameter
 * @argv: an array of input arguments
 * @argc: input arguments
 * Return Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;

	if (!atoi(argv[1]))
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num >= 0)
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n",sum);
	return (0);
}
