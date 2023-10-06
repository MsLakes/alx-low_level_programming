#include "main.h"

/**
 * append_text_to_file - Add text at the tail of the specified file.
 * @filename: The designated file's name.
 * @text_content: The text segment to be added to the file's end.
 *
 * Return: If there are issues, or if filename is NULL, returns -1.
 *         If no permissions to write or file doesn't exist, returns -1.
 *         If successful, returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}
