#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		while (textcontent != NULL)
		{
			c++;
		}
		a = open(filename, O_WRONLY | O_APEND);
		b = write(a, text_content, c);

		if (b == 0 || a == 0)
		{
			return (-1);
		}
		else
		{
			close(a);
			return (1);
		}
	}
}
