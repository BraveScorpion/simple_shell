#include "shell.h"

/**
 * _strlen - finds the length of a given string.
 * @str: String to be evaulted
 * Return: String length
 */
int _strlen(char *str)
{
        int i;

        if (str == NULL)
                return (0);
        for (i = 0; str[i]; i++)
                ;
        return (i);
}
/**
 * _strcmp - compares strings
 * @str: String to be compared
 * @str1: String to be compared
 * Return: 0 if str = str1 are equivalent
 */
int _strcmp(char *str, char *str1)
{
        int i;

        if (_strlen(str) != _strlen(str1))
                return (-1);
        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] != str1[i])
                        return (-1);
        }
        return (0);
}
/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination to copy to.
* @src: String to be copied.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
        int i = 0;

        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
/**
 * _strcat - Concatenates two strings
 * @dest: The string to append
 * @src: The string to be appened
 * Return: A pointer to the combined string
 */
char *_strcat(char *dest, const char *src)
{
        int dest_len = _strlen(dest), i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[dest_len + i] = src[i];
        }

        dest[dest_len + i] = '\0';
        return (dest);
}
