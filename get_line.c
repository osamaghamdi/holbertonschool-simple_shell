#include "shell.h"

/*
 * File: get_line.c
 * Description: Contains a custom implementation of the getline function.
 */

char *custom_getline(void)
{
	ssize_t read;
	size_t len = 0;
	char *line = NULL;

	read = getline(&line, &len, stdin);
	if (read == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
