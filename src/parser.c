#include "../include/parser.h"
#include <stdio.h>
#include <string.h>

char* parse(char* fileContents) {
    char* parsed;

    while (*fileContents != '\0') {
        if (*fileContents == '\n')
        {
            // parsed += parsed contents for fileContents
        }

        *fileContents++;
    }

    return parsed;
}
