#include <stdio.h>
#include <unistd.h>
#include "main.h"
/****/
int create_file(const char *filename, char *text_content)
{
	int file, byte_write, letters;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = " ";
	}
	letters = 0;
	while (text_content[letters])
	{
		letters++;
	}
	byte_write = write(file, text_content, letters);
	if (byte_write == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}

