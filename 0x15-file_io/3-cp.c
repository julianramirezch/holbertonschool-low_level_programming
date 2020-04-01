#include  "holberton.h"

/**
 * main -  program that copies the content of a file to another file.
 * @argc: Number or arguments.
 * @argv: Arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int ff, ft;
	char buffer[1024];
	ssize_t readp, writep;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	readp = read(ff, buffer, sizeof(buffer));
	if (readp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	ft = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	writep = write(ft, buffer, readp);
	if (writep == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ft);
		exit(100);
	}
	return (0);
}
