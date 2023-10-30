#include "main.h"
#include <string.h>
/****/
int main(void)
{
	int argc;
	char argv;
	int cents, change;

	if (argc != 1)
	{
		printf("Error\n");
	}
	change = int(atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	for cents in (25, 10, 5, 2, 1)
	int coin_count = 0;
	while change >= cents;
	change -= cents;
	coin_count += 1

	printf("%d\n",coin_count);
	return (0);
}

