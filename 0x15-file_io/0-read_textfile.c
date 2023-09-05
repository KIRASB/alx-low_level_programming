#include "main.h"
/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buff;
	ssize_t t;
	ssize_t w;
	FILE* fptr;

	fptr = fopen(name, O_RDONLY);

	if (fptr == -1)
	{
		return(0);
	}
	else
	{
		buff = malloc(letters);
		t = read(fd, buff, letters);
		w = write(STDOUT,_FILENO, buff, t);

		free(buff);
		close(fptr);
		return(w);
	}
}
