#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/***
 * create_buffer - This allocates 1024 bytes for buffer
 * @kite: Name of file buffer is storing characters.
 *
 * Return: Pointer to newly allocated buffer
 */
char *create_buffer(char *kite)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", kite);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file -This Closes the file descriptors.
 * @dfile: The file descriptor to be closed.
 */
void close_file(int dfile)
{
	int j;

	j = close(dfile);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dfile);
		exit(100);
	}
}

/**
 * main - This Copies the contents of one file to another file.
 * @arg1: number of arguments supplied to the program.
 * @arg2: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is wrong - exit code 97.
 * If file_from does not exist or is unreadable - exit code 98.
 * If file_to cannot be made or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int arg1, char *arg2[])
{
	int f, t, i, j;
	char *buffer;

	if (arg1 != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(arg2[2]);
	f = open(arg2[1], O_RDONLY);
	i = read(f, buffer, 1024);
	t = open(arg2[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arg2[1]);
			free(buffer);
			exit(98);
		}

		j = write(t, buffer, i);
		if (t == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arg2[2]);
			free(buffer);
			exit(99);
		}

		i = read(f, buffer, 1024);
		t = open(arg2[2], O_WRONLY | O_APPEND);

	} while (i > 0);

	free(buffer);
	close_file(f);
	close_file(t);

	return (0);
}


