#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: arguments passed in
 * @argv: an array of arguments
 * @num1: First number passed
 * @num2: Second number passed
 * @operator: The pointer array
 * Return: Nothing**/
int main (int argc, char *argv[])
{
	char *operator;
	int num1;
	int num2;
	int results;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	int (*op_func)(int, int) = op_func(operator);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	results = op_func(num1, num2);
	printf("%d\n", results);
	return (0);
}
