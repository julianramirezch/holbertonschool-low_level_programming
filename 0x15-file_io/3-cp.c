#include  "holberton.h"

/**
 * main -  program that copies the content of a file to another file.
 * @ac: Number or arguments
 * @av: Arguments
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int ff, ft;
	char buffer[1024];
	ssize_t writep, readp = 1, closeff, closeft;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ff = open(av[1], O_RDONLY);
	if (ff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	ft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (readp)
	{
		readp = read(ff, buffer, sizeof(buffer));
		if (readp == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		writep = write(ft, buffer, readp);
		if (writep == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	closeff = close(ff);
	if (closeff == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff), exit(100);
	closeft = close(ft);
	if (closeft == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ft), exit(100);
	return (0);
}
