#include "shell.h"

/**
 * main - Entry point for the shell program.
 * @ac: Argument count (unused).
 * @av: Argument vector (unused).
 *
 * Return: Always returns 1 (not standard, but placeholder for now).
 */

int main(int ac, char **av)
{

char *line;

while (1)
{

line = get_line();
printf("%s\n", line);

}

return (1);
}
