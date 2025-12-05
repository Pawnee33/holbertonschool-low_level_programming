#include "main.h"
/**
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int len;
	ssize_t writing;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
