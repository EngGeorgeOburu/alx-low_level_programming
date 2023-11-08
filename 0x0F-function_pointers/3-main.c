#include <stdio.h>
#include "main.h"
#include "calc.h"
/****/
int main (int argc, char argv[])
{
	char *operator = argv[2];
	num1 = atoi(argv[1];
	num2 = atoi(argv[3];
	int results;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	int (*op_func)(int, int) = get_op_func(operator);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	results = op_func(num1, num2);
	printf("%d\n", results);
	return (0);
}
