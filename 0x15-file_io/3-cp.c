#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* close_descr - close the file.
* @descr: the file descriptor to close.
* Return: Always 0.
*/

void close_descr(int descr)
{
	int cl;

	cl = close(descr);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descr);
		exit(100);
	}
}

/**
* main - opies the content of a file to another file.
* @argc: the number of arguments.
* @argv: the An array of pointers to the arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int fd, wr, re, fd2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	re = read(fd, buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(fd2, buffer, re);
	if (fd2 == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	free(buffer);
	close_descr(fd);
	close_descr(fd2);

	return (0);
}
