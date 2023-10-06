#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Display content from a file on STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The maximum number of characters to read.
 * 
 * Return: w - The actual number of characters displayed.
 *         0 if an error occurs or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (w);
}
