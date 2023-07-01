#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    FILE *fp = NULL;
    char read[100];

    if (argc != 2)
    {
        fprintf(stderr, "Usage: notes <filename>\n");
        exit(EXIT_FAILURE);
    }

    fp = fopen(argv[1], "a");
    if (fp == NULL)
    {
        fprintf(stderr, "Failed to open %s", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Enter Notes: (Press Ctrl+D on Unix/Linux or Ctrl+Z on Windows to finish)\n");

    while (fgets(read, sizeof(read), stdin) != NULL)
    {
        fprintf(fp, "%s", read);
    }

    fclose(fp);

    return (0);
}
