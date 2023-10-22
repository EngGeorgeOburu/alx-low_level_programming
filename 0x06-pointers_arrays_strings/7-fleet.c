#include "main.h"
/**
 * *leet - The function encodes a string into 1337.
 * @str: function parameter.
 */
char *leet(char *str)
{
	char *ptr = str; //ptr points to str
	char leetTable[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'I', 'L'};//charater array of leet table tables
	char leetRep[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};//charracter array of leet table letters
	int i;

	while (*str)
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == leetTable[i])
			{
				*str = leetRep[i];
				break;
			}
		}
		str++;
	}
	return ptr;
}
