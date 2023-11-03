#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * **/
int main(int argc, char * argv[])
{
	int first_num = atoi(argv[1]);
	int second_num = atoi(argv[2]);
	int mult = first_num * second_num;

	while (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (first_num <= 0 || second_num <= 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", mult);
	return (0);
}
