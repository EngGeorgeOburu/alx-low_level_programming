#include <stdio.h>
#include "main.h"
/****/
void file_error(int file_f, int file_t, char *argv[])
{
	if (file_f == -1)
	{
		dprintf(STERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}
int main(int argc, char *argv[])
{
	int file_f, file_t, close_e;
	size_t chars, byte_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_f file_t");
		exit(97);
	}
	file_f = open(argv[1], 0_RDONLY);
	file_t = open(argv[2],0_CREAT | 0_WRONGLY | 0_TRUNC | 0_APPEND, 0664);
	file_e(file_f, file_t, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_t, buffer, 1024);
		if (chars == -1)
			file_e(-1, 0, argv);
		byte_write = write(file_to, buffer, chars);
		if (byte_write == -1)
			file_e(0, -1, argv);
	}
	close_e = close(file_f);
	if (close_e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	close_e = close(file_t);
	if (close_e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}
