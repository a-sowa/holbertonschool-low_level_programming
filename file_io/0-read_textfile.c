#include "main.h"
#include <unistd.h>

/**
 * read_textfile - Reads and prints a file's content to the standard ouput.
 * @filename: The source file.
 * @letters: Number of letters to read and print.
 * Return: Number of letters read and printed, or 0 if NULL or on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, r) == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (r);
}
