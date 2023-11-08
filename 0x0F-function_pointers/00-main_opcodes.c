#include <stdio.h>
/****/
int main(int argc, char *argv[])
{
	int bytes;
	char *array;
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
}
