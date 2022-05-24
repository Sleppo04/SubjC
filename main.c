// ============================================================================
// This is the sourcecode for the Subjective-C-Compiler.
// I created this as a joke.
// Please don't take this seriously.
// Please don't use this in production (why would you anyways?)
// ~Sleppo04  
// ============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "text.h"

int ProcessFile(char* filename)
{
    int i = 0;
    int error;
    FILE* file;
    char line[1024];

    file = fopen(filename, "r");
    if(file == NULL) {
        printf("ERROR: %s", MSG_WRONGFILE);
        return 1;
    }

    printf(MSG_COMPILING, filename);

    while(fgets(line, sizeof(line), file) != NULL) {
        if(i % 3 == 0) {
            // Throw "error" on line
            error = rand() % (sizeof(lineErrors) / sizeof(char*));
            printf("%s:%i  %s", filename, i, line);
            printf("ERROR: %s\n", lineErrors[error]);
        }
        i++;
    }

    return 0;
}

int main(int argc, char** argv)
{
    char filename[1024];
    
    printf(BANNER);

    if(argc <= 1) {
        printf("ERROR: Please specify an input file. Stupid.\n");
        return -1;
    }

    strcpy(filename, argv[1]);
    ProcessFile(filename);

    // Print final termination message
    printf("ERROR: %s", finalErrors[rand() % (sizeof(finalErrors) / sizeof(char*))]);
    
    return 0;
}