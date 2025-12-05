#include "main.h"
/**
 * create_file - creates a file and writes inside it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int len;
	ssize_t writing;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		writing = write(file_descriptor, text_content, len);

		if (writing == -1 || writing != len)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}
