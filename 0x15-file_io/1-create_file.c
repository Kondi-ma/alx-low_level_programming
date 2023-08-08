#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: pointer to name of file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         On success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int mu, goal, wit = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (wit = 0; text_content[wit];)
			wit++;
	}

	mu = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	goal = write(mu, text_content, wit);

	if (mu == -1 || goal == -1)
		return (-1);

	close(mu);

	return (1);
}

