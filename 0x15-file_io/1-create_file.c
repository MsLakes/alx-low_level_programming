#include "main.h"

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: Name of the file to be created.
 * @text_content: The string to be written.
 *
 * Return: 1 if successful, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, w, len = 0;

    if (!filename)
        return (-1);

    if (text_content)
    {
        for (len = 0; text_content[len]; len++)
            ;
    }

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    w = write(fd, text_content, len);

    close(fd);

    if (w == -1)
        return (-1);

    return (1);
}
