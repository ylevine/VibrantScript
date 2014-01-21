#include <stdio.h>
#include <stdlib.h>
#include "../include/reader.h"
#include "../include/parser.h"

int main()
{
    char* fileContents = read("../test/testfile.vs");
    if (fileContents == NULL)
    {
        printf("Error reading the source file.");
        exit(1);
    }

    char* convertedCode = parse(fileContents);

    printf(convertedCode);
    free(convertedCode);

    return 0;
}
