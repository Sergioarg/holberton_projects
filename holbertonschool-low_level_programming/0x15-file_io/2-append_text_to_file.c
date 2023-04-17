#include "holberton.h"
/**
 * append_text_to_file - Create a new file if not exist and fill with content
 * @filename: is the name of the file to create
 * @text_content: TExt content of the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t lenght;
	int file = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY, 0600);
	if (file == -1)
		return (file);

	for (lenght = 0; text_content && text_content[lenght]; lenght++)
	{}

	if (write(file, text_content, lenght) == -1)
		return (-1);
	close(file);
	return (1);
}
