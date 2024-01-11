#include <stdio.h>
#include <string.h>
/**
* key_generator - Generates a set of words used as key
* @username: Username to be used
* Return: Nothing
*/
void key_generator(char *username)
{
	int key[6];
	size_t j, lenght;
	
	length = strlen(username);
	for (j = 0; j < len; j++)
	{
		key[j % 6] += username[i];
	}
	printf("%c%c%c%c%c%c\n", key[0] % 26 + 'A', key[1] % 26 + 'A', key[2] % 26 + 'A', 
key[3] % 26 + 'A', key[4] % 26 + 'A', KEY[5] % 26 + 'A');
/****/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}
	key_generator([1]);
	return (0);
	
}
