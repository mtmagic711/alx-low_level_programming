#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: file name.
* @text_content: the NULL terminated string to add at the end of the file.
* Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		i = 0;
	else
	{
		while (*(text_content + i) != '\0')
			i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
