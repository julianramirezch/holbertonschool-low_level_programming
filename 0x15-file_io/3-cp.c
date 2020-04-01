#include  "holberton.h"

/**
 * main -  program that copies the content of a file to another file.
 * @argc: Number or arguments.
 * @argv: Arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int ff, ft, readp = 1, writep, closeff, closeft;
	char buffer[1024];

	if (argc < 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	ft = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (ft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	while (readp)
	{
		readp = read(ff, buffer, sizeof(buffer));
		if (readp == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
		if (readp > 0)
		{
			writep = write(ft, buffer, readp);
			if (writep == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
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
