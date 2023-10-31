#include "main.h"

/**
 * copy_file - A function that copies the content of a file to another file.
 * @file_from: Source file
 * @file_to: Destination file
 */

void copy_file(const char *file_from, const char *file_to)
{
	char buff[1024];
	int  o1, o2, r, w;

	o1 = open(file_from, O_RDONLY);
	if (o1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	o2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (o2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		exit(99);
	}
	while ((r = read(o1, buff, 1024)) > 0)
	{
		w = write(o2, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(o1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o1);
		exit(100);
	}
	if (close(o2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o2);
		exit(100);
	}
}

/**
 * main - check the code
 * @ac: Arguement counter
 * @av: String arguement
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from  file_to\n", av[0]);
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
