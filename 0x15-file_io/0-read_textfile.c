#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and print it to the POSIX STDOUT.
 * @filename: text file being read
 * @letters: number of letters I want to read
 * Return: actual number of bytes I read and print
 * 0 when function fails or there is no file
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
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
