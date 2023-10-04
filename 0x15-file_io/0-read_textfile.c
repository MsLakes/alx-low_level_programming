#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text from a file and prints it to the standard output.
 * @filename: Name of the file to read.
 * @letters: Maximum number of letters to read and print.
 * 
 * Return: Number of bytes read and printed, or 0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd, read_bytes, written_bytes;

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (!buf) {
        close(fd);
        return (0);
    }

    read_bytes = read(fd, buf, letters);
    written_bytes = write(STDOUT_FILENO, buf, read_bytes);

    free(buf);
    close(fd);
    
    return (written_bytes);
}
