#include "shell.h"

/**
 * prompt - Outputs propmt to standard outpout
 * @fd: Stream selector
 * @buf: user input storage
**/
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(PROMPT);
}

/**
 * _puts - Outputs strings in STDOUT
 * @str: String that will be written
 * Return: void
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
