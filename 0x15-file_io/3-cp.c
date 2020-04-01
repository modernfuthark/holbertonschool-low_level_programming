#include "holberton.h"
/**
 * main - Copy content from one file to another
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, any other number is an error code
 */

int main(int argc, char *argv[])
{
	int srcnum, destnum, close1, close2, copied;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	srcnum = open(argv[1], O_RDONLY);
	if (srcnum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destnum = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (destnum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copied = cpy(srcnum, destnum, argv[1], argv[2]);
	if (copied != 1)
		exit(copied);

	close1 = close(srcnum);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", srcnum);
		exit(100);
	}
	close2 = close(destnum);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", destnum);
		exit(100);
	}
	return (0);
}

/**
 * cpy - Copy a file
 * @srcnum: Source file descriptor
 * @destnum: Destination file descriptor
 * @src: Source file name
 * @dest: Destination file name
 * Return: 1 on success, other for error codes
 */

int cpy(int srcnum, int destnum, char *src, char *dest)
{
	char buff[1024];
	int writenum, readnum;

	for (writenum = 1024; writenum == 1024;)
	{
		readnum = read(srcnum, buff, 1024);
		if (readnum == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			return (98);
		}

		writenum = write(destnum, buff, readnum);
		if (writenum == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			return (99);
		}
	}
	return (1);
}
