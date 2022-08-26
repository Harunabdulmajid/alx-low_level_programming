#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 * @filename: file to read
 * @letters: no. of letters to read and print
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int a, b;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	a = read(fd, buff, letters);
	if (a < 0)
	{
		free(buff);
		return (0);
	}
	buff[a] = '\0';

	close(fd);

	b = write(STDOUT_FILENO, buff, a);
	if (b < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (b);
}

