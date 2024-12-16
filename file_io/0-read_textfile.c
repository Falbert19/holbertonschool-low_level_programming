#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: actual number of letters, if not open return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
