#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_count;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd_count = read(fd_from, buffer, 1024)) > 0)
	{
		if ((write(fd_to, buffer, rd_count) != rd_count) || (fd_to == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
		(close(fd_from) == -1) ? fd_from : fd_to);
		exit(100);
	}
	return (0);
}
