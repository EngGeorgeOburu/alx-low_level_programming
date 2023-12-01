#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - Function that creates a file
 * @filename: name of the file to be created
 * @text_content: string to write into the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, byte_write, i;

	if (filename == NULL)
	{
		return (-1);
	}
	file_d = open(filename, O_RDONLY | O_APPEND);
	if (file_d == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++);
		byte_write = write(file_d, text_content, i);

		if (byte_write == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}

