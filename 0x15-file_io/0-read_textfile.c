#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Reads and prints a text file to POSIX standard output
 * @filename: file name to read file from
 * @letters: characters to read from the file
 * Return: Letters if success, or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buffer;
	ssize_t byte_w, byte_r;

	if (filename == NULL)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{	close (file_d);
		return (0);
	}
	byte_r = read(file_d, buffer, letters);
	byte_w = write(STDOUT_FILENO, buffer, byte_r);


	free(buffer);

	return (byte_w);
}
