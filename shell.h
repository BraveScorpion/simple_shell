#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <signal.h>
#define PROMPT "#shell$ "
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>

/**
 * struct builtin_ins - Structure for buid_ins
 * @built: User input
 * @f: Function pointer
 */
typedef struct builtin_ins
{
	char *built;
	void (*f)(char *);
} builtin_t;


extern char **environ;

/*strings*/
int _strcmp(char *, char *);
char *_strdup(char *);
void print_str(char *, int);
int print_number(int);
int _putchar(char);
int _strlen(char *);

char **token_interface(char *, const char *, int);
int count_token(char *, const char *);
char **tokenize(int, char *, const char *);
void create_child(char **, char *, int, char **);
void parse_line(char *, size_t, int, char **);
char *path_finder(char *);
int find_path(char *);
char **tokenize_path(int, char *);
char *search_directories(char **, char *);
char *build_path(char *, char *);
void double_free(char **);
void single_free(int, ...);

void error_printing(char *, int, char *);
void exec_error(char *, int, char *);

int built_in(char **, char *);
void (*check_built_ins(char *))(char *);
void exit_b(char *);
void env_b(char *);
void cd_b(char *);

#endif
