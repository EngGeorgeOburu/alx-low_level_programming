#include "main.h"
/**
 * _atoi - This function converts a string to an integer
 * @s: string to be converted
 * Return:The converted string
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, len = 0, f = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (k);
}

