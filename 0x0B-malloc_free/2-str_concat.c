#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Function concatenates two strings.
 * @str1:First string parameter.
 * @str2:Second string parameter.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3 = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcpy(s3, s2);
	return (s3);
}
