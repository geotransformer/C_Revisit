#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (strcmp(argv[0], "./lower") != 0 && strcmp(argv[0], "./upper") != 0)
    {
        printf("argv[0]: %s\n", argv[0]);
        puts("Error: invalid arguments.");
        return EXIT_FAILURE;
    }

    if (strcmp(argv[0], "./lower") == 0) 
    {
        int c;
        while ((c = getc(stdin)) != EOF)
        {
            putc(tolower(c), stdout);
        }
    }

    if (strcmp(argv[0], "./upper") == 0) 
    {
        int c;
        while ((c = getc(stdin)) != EOF)
        {
            putc(toupper(c), stdout);
        }
    }
  return EXIT_SUCCESS;
}