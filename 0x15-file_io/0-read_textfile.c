#include "main.h"

/**
* read_textfile -  reads a text file and prints it to the STDOUT.
* @filename: the filename.
* @letters: letters to read from the file.
* Return: the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);

	free(buffer);
	return (wr);
}
