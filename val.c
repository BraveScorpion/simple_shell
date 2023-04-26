#include "shell.h"

/**
 * free_all - Releases mem from ram
 * @tokens: user input
 * @path: Path string
 * @line: Imput
 * @fullpath: string of command directory
 * @flag: full path flagger
 * Return: none
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag == 1)
		free(fullpath);
}

/**
 * free_dp - Free pointer in pointer
 * @array: An array of pointers
 * @length: Number of pointers
 * Return: void
 */
void free_dp(char **array, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
