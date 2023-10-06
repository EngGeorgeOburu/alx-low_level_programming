#include<stdio.h>
/**
 *main - Entry point
 *Description:A function that prints typical data sizes of various data type
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", char);
	printf("Size of an int: %lu bytes(s)\n", int);
	printf("Size of a long int: %lu byte(s)\n", long int);
	printf("Size of long long int: %lu byte(s)\n", long long int);
	printf("Size of a float: %lu byte(s)\n", float);
	return (0);
}
