#include "holberton.h"
/**
 * create_file - Create a file with a given name and content
 * @filename: Name of file
 * @text_content: Text to insert into file
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writecnt, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while(text_content[len])
		++len;

	writecnt = write(fd, text_content, len);
	if (writecnt == -1)
		return (-1);

	close(fd);
	return (1);
}
