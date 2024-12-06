#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"



	/* Version 1 */
	void tokenizing(void) {
		printf("*** Start of Tokenizing Words Demo ***\n"); //Prompt for start.
		char words[BUFFER_SIZE];
		char* nextWord = NULL; // Start with nothing.
		int wordsCounter;
		do { //Keep testing until user wants to quit.
			printf("Type a few words separated by space (q - to quit):\n");
			fgets(words, BUFFER_SIZE, stdin); // Get words at stdin.
			words[strlen(words) - 1] = '\0'; //If the word length is 1, It will be NULL.
			if (strcmp(words, "q") != 0) { //When user input is not "q".
				nextWord = strtok(words, " "); // Sentecens will sperate when meeting " ".
				wordsCounter = 1;//Tracking the order of words.
				while (nextWord) { //while loop keeps working until nextWord is not NULL.
					printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //#%d is a number of order, /s is a word.
					/*This retrieves the next word (token) from the remaining part of the string.
					Passing NULL makes strtok continue processing from where it left off.
					It returns the next token split by the specified delimiter (" " in this case).
					If no more tokens are found, it returns NULL.*/
					nextWord = strtok(NULL, " ");
				}
			}
		} while (strcmp(words, "q") != 0); // This function is end when words is "q".
		printf("***End of Tokenizing Words Demo ***\n\n");
	}



/* Version 2 */
// insert here


/* Version 3 */
//insert here


