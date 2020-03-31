#include  "holberton.h"

/**
 * read_textfile -reads a text file and prints it to the POSIX standard output.
 * @filename: Filename pointer
 * @letters: Numbers of letters it should read and print
 * Return: Actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readp;
	ssize_t writep;
	ssize_t closep;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readp = read(fd, buffer, letters);
	if (readp == -1)
		return (-1);
	writep = write(STDOUT_FILENO, buffer, readp);
	if (writep == -1)
		return (-1);
	closep = close(fd);
	if (closep == -1)
		return (-1);
	return (readp);
}
