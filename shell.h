#ifndef SHELL_H
#define SHELL_H

/*
 * File: shell.h
 * Description: Header file for the simple shell project.
 * Contains function prototypes and included libraries.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

char *_strdup(const char *str);
size_t _strlen(const char *s);
void execute_command(char *command);
void shell_loop(void);

#endif /* SHELL_H */
