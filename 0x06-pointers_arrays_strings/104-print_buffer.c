#include "main.h"
#include <stdio.h>
/**
 * print_buffer - The functionprints the buffer.
 * @size: Size of the buffer.
 * @b:buffer.
 * Return:Always 0 (success)
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	
	for (i = 0; i < size; i = (i+10))
	{
		printf("%08x: ", i);
		if (j % 2 != 0)
		{
			printf(" ");
		}
	else
	{
		printf(" ");
	}
	}
	printf(" ");
	
	for (j = i; j < i + 10; j++)
	{
		if (j < size)
		{
			char c = b[j];
			if (c >= 32 && c <= 126)
			{
				printf("%c", c);
			}
			else
			{
				printf(".");
			}
		}
	}
	printf("\n");
	}
}
