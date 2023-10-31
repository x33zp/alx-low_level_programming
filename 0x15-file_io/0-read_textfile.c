#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 *		prints it to the POSIX standard output.
 * @filename: Name of file to be read
 * @letters: Is the number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);

	if (text == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDWR);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close(o);

	return (w);
}
