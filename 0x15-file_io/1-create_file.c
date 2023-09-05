#include "main.h"
/**
 * create_file - the function creat a file and print the content txt int it
 * @filename: the name ofthe file
 * @text_content: the content of the text
 * Return: 1 if evrything goes good and -1 for error
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		while (text_content != NULL)
		{
			len++;
		}
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(fd, text_content, len);

		if (w == -1 || fd == -1)
		{
			return (-1);
		}
		close(fd);
	return (1);
	}
}
