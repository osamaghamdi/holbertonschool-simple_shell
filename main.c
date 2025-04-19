#include "shell.h"

/**
 * main - Entry point for the shell
 *
 * Return: Always 0
 */
int main(void)
{
	char *line = NULL;
	char **args = NULL;

	while (1)
	{
		printf("$ ");
		line = read_line();
		if (line == NULL)
			break;

		args = parse_line(line);
		if (args == NULL)
		{
			free(line);
			continue;
		}

		free(line);
		free(args);
	}
	return (0);
}
