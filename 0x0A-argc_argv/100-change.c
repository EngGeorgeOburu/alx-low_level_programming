#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * @cents: coins to change
 * Return Always 0 (success)
 */
int main(int argc, char * argv[])
{
	int cents = atoi(argv[1]);
	int i;
	int coin_count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}
	printf("%d\n",coin_count);
	return (0);
}

