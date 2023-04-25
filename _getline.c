#include "shell.h"

/**
 * _getline - Recieves user input
 * @input: User input holder
 * Return: User input
 */
char *_getline(FILE *input)
{
	char *line;
	ssize_t read;
	size_t len;

	line = NULL;
	len = 0;
	read = getline(&line, &len, input);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
