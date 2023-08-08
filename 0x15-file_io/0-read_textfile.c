#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A Read text file print to STDOUT.
 * @filename: The text file being read.
 * @letters: The number of letters to be read.
 * Return: goal - The actual number of letters read and printed
 *        0 when filename is NULL or when file cannot be read or opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *try;
	ssize_t mu;
	ssize_t goal;
	ssize_t r;

	mu = open(filename, O_RDONLY);
	if (mu == -1)
		return (0);
	try = malloc(sizeof(char) * letters);
	r = read(mu, try, letters);
	goal = write(STDOUT_FILENO, try, r);

	free(try);
	close(mu);
	return (goal);
}

