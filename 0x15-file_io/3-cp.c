#include  "holberton.h"

/**
 * main -  program that copies the content of a file to another file.
 * @argc: Number or arguments.
 * @argv: Arguments
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int ff, ft, readp = 1024, writep, closeff, closeft;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ff = open(av[1], O_RDONLY);
	if (ff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);
	ft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]), exit(99);
	while (readp == 1024)
	{
		readp = read(ff, buffer, 1024);
		if (readp == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);
		if (readp > 0)
		{
			writep = write(ft, buffer, readp);
			if (writep == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]), exit(99);
		}
	}
	closeff = close(ff);
	closeft = close(ft);
	if (closeff == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff), exit(100);
	if (closeft == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ft), exit(100);
	return (0);
}
