#include <stdio.h>
#include "main.h"
/**
 * read_textfile - Reads and prints a text file to POSIX standard output
 * @filename: file name to read file from
 * @letters: characters to read from the file
 * Return: Letters if success, or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	FILE *file = fopen(filename, "r");

	if (file = NULL)
		return (0);
	char *buffer = malloc(sizeof(char) * (letter));
	if (buffer == NULL)
		return (0);
	file = read(file, buffer, letters);
	write_into = write(STDOUT_FILENO, buffer, file);

	close(file);
	free(buffer);
	return (file);
}

