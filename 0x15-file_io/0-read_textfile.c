#include "holberton.h"
/**
 * read_textfile - Read a text file and print its contense
 * @filename: Name of file
 * @letters: Letters that should be read and printed
 * Return: literal numbers that are read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t readcnt, writing;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char *) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readcnt = read(fd, buff, letters);
	if (readcnt == -1)
		return (0);

	writing = write(STDOUT_FILENO, buff, readcnt);
	if (writing == -1 || writing != readcnt)
		return (0);

	close(fd);
	free(buff);
	return (writing);
}
