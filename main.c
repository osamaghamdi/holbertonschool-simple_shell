#include "shell.h"

/**
 * main - Entry point for the shell program
 *
 * Return: 0 on success
 */
int main(void)
{
    char *line;

    while (1)
    {
        line = get_line();
        printf("%s\n", line);
    }

    return (0);
}
