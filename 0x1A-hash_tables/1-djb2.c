/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str:The string to hash.
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;/*Initialize the hash value*/
	int c;/*Initialize variable for the current character*/
	while ((c = *str++))/*Iterate through each character of the string*/
	{
		hash = ((hash << 5) + hash) + c;/*Compute the hash value*/
	}
	return (hash);/*Return the computed hash value*/
}
