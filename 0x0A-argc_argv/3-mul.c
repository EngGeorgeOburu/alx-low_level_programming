#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 * @num1: Input number one.
 * @num2: Input number two.
 * Return 0 Always.
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argv[2] == NULL || argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
