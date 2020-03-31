#include "holberton.h"
/**
 * append_text_to_file - Add text onto a file
 * @filename: Name of file
 * @text_content: Text to add
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writecnt, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		while (text_content[len])
			++len;

		writecnt = write(fd, text_content, len);
		if (writecnt == -1)
			return (-1);

		close(fd);
	}
	return (1);
}
