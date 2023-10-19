#include "main.h"
/**
 * *rot13 - The function encodes a string using rot13
 * **/
char *rot13(char *str)
{
	int j = 0;

	for (j = 0; str[j] != '\0'; j++)
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = (str[j] - 'a' + 13) % 26 + 'a';
		}
		else if (str[j] >= 'A' && str[j] <= 'Z')
		{
		       	str[j] =  (str[j] - 'A' + 13) % 26 + 'A';
i		}
	return (str);
}
