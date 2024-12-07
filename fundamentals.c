// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals(void) {
    // V1
    printf("*** Start of Indexing Strings Demo ***\n");
    //Deckare variables for storing input strings
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;
    
    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);//Get the input from string
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove newline character
        
        //Check if it finish or not 
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0'; // Remove newline character
            
            position = atoi(numInput);
            //Check if variable is greater or not
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            
            printf("The character found at %d position is '%c'\n", 
                (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0); //Repeat until typing q
    
    printf("*** End of Indexing Strings Demo ***\n");

    // V2
    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE];

    do {
        printf("Type a string (q to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Remove the newline character from the end of the string
        buffer2[strlen(buffer2) - 1] = '\0';

        if (strcmp(buffer2, "q") != 0) {
            printf("The length of '%s' is %d characters\n",
                buffer2, (int)strlen(buffer2));
        }
    } while (strcmp(buffer2, "q") != 0);

    printf("*** End of Measuring Strings Demo ***\n\n");
}