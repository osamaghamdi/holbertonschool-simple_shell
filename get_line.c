#include "shell.h"

/**
 * get_line - Reads a line of input from stdin.
 *
 * Return: A pointer to the buffer containing the input string,
 * or NULL if an error occurs or EOF is reached.
 */
char *get_line(void)
{
	char *buffer;
	size_t buffer_size;

	buffer = NULL;
	printf("($)");

	if (getline(&buffer, &buffer_size, stdin) == -1)
	{
		buffer = NULL;
		if (feof(stdin))
			printf("[EOF]");
		else
			return (buffer);
	}

	return (buffer);
}
