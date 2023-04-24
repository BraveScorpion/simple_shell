#include "shell.h"

/**
 * double_free - Frees pointer in pointer
 * @to_be_freed: Memory to be freed
 */
void double_free(char **to_be_freed)
{
	int index;

	for (index = 0; to_be_freed[index] != NULL; index++)
		free(to_be_freed[index]);
	free(to_be_freed);
}

/**
 * single_free - Frees a pointers
 * @n: Amount of pointers that to be freed
 */
void single_free(int n, ...)
{
	int i;
	char *str;
	va_list a_list;

	va_start(a_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(a_list, char*);
		if (str == NULL)
			str = "(nil)";
		free(str);
	}
	va_end(a_list);
}

