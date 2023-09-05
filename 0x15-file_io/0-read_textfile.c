#include "main.h"
/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t t;
	ssize_t w;
	ssize_t fptr;

	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
	{
		return(0);
	}
	else
	{
		buff = malloc(letters);
		t = read(fptr, buff, letters);
		w = write(STDOUT_FILENO, buff, t);

		free(buff);
		close(fptr);
		return(w);
	}
}
