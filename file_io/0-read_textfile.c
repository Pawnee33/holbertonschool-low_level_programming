#include "main.h"
/**
* read_textfile - Reads and prints a text file to the 'POSIX'
* standard output
* @filename: file to reads and prints
* @letters: Numbers of letters
*
* Return: 0 if is NULL or cant opened, read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	r = read(file_descriptor, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (w);
}
