#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * Return: 0 on success
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
    char *line;

    while (1)
    {
        line = get_line();
        printf("%s\n", line);
    }

    return (0);
}
