#include "shell.h"

/**
 * error_printing - handles command matche failures
 * @count:Number of running processes
 * @av: Program name
 * @command: Command
 */
void error_printing(char *av, int count, char *command)
{
	print_str(av, 1);
	print_str(": ", 1);
	print_number(count);
	print_str(": ", 1);
	print_str(command, 1);
}

/**
 * exec_error - errhandler for execution errors
 * @av: Progrma name
 * @count: Command counter
 * @tmp_command: command
 */

void exec_error(char *av, int count, char *tmp_command)
{
	error_printing(av, count, tmp_command);
	print_str(": ", 1);
	perror("");
	exit(1);
}
