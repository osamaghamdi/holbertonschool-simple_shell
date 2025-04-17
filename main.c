#include "shell.h"

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
