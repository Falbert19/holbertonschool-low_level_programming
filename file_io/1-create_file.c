#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 *
 * Return: 1 if success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		written = write(fd, text_content, len);
		if (written == -1 || written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

