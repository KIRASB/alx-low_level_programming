#include "main.h"
/**
 * read_textfile - the function read txtfile pront to STDOUT
 * @filename: pointer to the name of the file
 * @letters: the number of letters passed
 * Return: w- actual number of bytes read and printed 
 * and 0 if the file name is null or it does not print anything
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
		return (0);
	}
	else
	{
		buff = malloc(letters);
		t = read(fptr, buff, letters);
		w = write(STDOUT_FILENO, buff, t);

		free(buff);
		close(fptr);
		return (w);
	}
}
