#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the file name.
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wt, rd;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);
	wt = write(STDOUT_FILENO, buffer, rd);
	if (wt == -1)
		return (0);
	free(buffer);
	close(fd);
	return (wt);
}
