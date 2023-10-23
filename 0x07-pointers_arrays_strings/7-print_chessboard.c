#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - The function prints chessboard table.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int size = 8;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
