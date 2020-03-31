#include  "holberton.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output.
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t writep;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '\0';
	for (len = 0; text_content[len]; len++)
	{}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);
	if (fd == -1)
		return (-1);
	writep = write(fd, text_content, len);
	if (writep == -1)
		return (-1);
	close(fd);
	return (1);
}
