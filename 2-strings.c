#include "shell.h"
/**
 * _putchar - Outputs a single character
 * @c: Character that wll be printed
 * Return: 1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
/**
 * print_str - Prints a whole string
 * @str: String to be printed
 * @n: If n = 0 print new line
 * Return: void
 */
void print_str(char *str, int n)
{
        int i;

        if (str == NULL)
                str = "(null)";
        for (i = 0; str[i] != '\0'; i++)
                write(STDOUT_FILENO, &str[i], 1);
        if (n == 0)
                write(STDOUT_FILENO, "\n", 1);
}
/**
 * _strdup - create a new copy of a string
 * @src: string to be copied
 * Return: Returns the duplicate
 */
char *_strdup(char *src)
{
        int i, len;
        char *dest;

        len = _strlen(src);
        dest = malloc(sizeof(char) * (len + 1));

        for (i = 0; src[i] != '\0'; i++)
                dest[i] = src[i];
        dest[i] = '\0';
        return (dest);
}
