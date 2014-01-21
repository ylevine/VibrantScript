#include "../include/reader.h"
#include <stdlib.h>
#include <stdio.h>

char* read(char* fileName)
{
    char* buffer;
    long length;
    FILE *file = fopen(fileName, "rb");

    if (file)
    {
        fseek(file, 0, SEEK_END);
        length = ftell(file);
        fseek(file, 0, SEEK_SET);
        buffer = malloc(length);
        if (buffer)
        {
            fread(buffer, 1, length, file);
        }
        fclose(file);
    } else
    {
        buffer = NULL;
    }

    return buffer;
}
