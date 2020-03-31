#include  "holberton.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t writep;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len]; len++)
	{}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	writep = write(fd, text_content, len);
	if (writep == -1)
		return (-1);
	close(fd);
	return (1);
}
