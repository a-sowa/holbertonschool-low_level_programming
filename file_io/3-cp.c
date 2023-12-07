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
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	int rd_count, wr_count;
	char buffer[1024];

	if (argc != 3 || fd_from == -1 || fd_to == -1)
	{
		dprintf(2, argc != 3 ? "Usage: cp file_from file_to\n" :
								"Error: Can't read from file %s\n", argc != 3 ? argv[0] : argv[1]);
		return (argc != 3 ? 97 : 98);
	}

	do {
		rd_count = read(fd_from, buffer, 1024);
		wr_count = write(fd_to, buffer, rd_count);
	} while (rd_count > 0 && wr_count == rd_count);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		return (100);
	}

	return (wr_count == -1 ? 99 : 0);
}
