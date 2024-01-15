#include "main.h"
#include <string.h>
/**
 * _strstr - Locates a substring.
 * @haystack: string parameter.
 * @needle: substring.
 * Return:Nothing
 */
char *_strstr(char *haystack, char *needle)
{
	char *substr;

	substr = strstr(haystack, needle);
	return (substr);
}
