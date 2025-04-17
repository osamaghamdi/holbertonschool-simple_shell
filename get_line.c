#include "shell.h"

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
printf("Get line failed");

}

  return ( buffer );
}
