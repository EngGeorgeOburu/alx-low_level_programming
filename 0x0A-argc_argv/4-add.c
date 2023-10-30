#include "main.h"
#include <stdio.h>
/****/
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num >= 0)
		{
			sum += sum;
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


