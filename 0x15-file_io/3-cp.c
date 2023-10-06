#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Assign 1024 bytes for a buffer.
 * @file: The filename the buffer is related to.
 *
 * Return: A pointer to the allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Shuts down file descriptors.
 * @fd: The descriptor of the file to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Transfers the content from one file to another.
 * @argc: The count of arguments provided to the program.
 * @argv: An array of pointers pointing to the arguments.
 *
 * Return: 0 if successful.
 * Description: 
 *   - Exits with code 97 if incorrect argument count.
 *   - Exits with code 98 if source file doesn't exist or isn't readable.
 *   - Exits with code 99 if destination file isn't writable or creatable.
 *   - Exits with code 100 if there's an error closing the files.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		r = read(from, buffer, 1024);

		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
