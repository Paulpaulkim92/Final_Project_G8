#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include <stdio.h>
#include "tokenizing.h"




void tokenizing(void) {
	char choice[BUFFER_SIZE];
	do {
		printf("*** Start of Tokenizing Words Demo ***\n"); //Prompt for start.
		printf("1 - Tokenize Words (space-separated)\n");
		printf("2 - Tokenize Phrases (comma-separated)\n");
		printf("3 - Tokenize Sentences (dot-separated)\n");
		printf("0 - Exit Tokenizing\n");
		printf("Your choice: ");
		fgets(choice, BUFFER_SIZE, stdin);
		choice[strlen(choice) - 1] = '\0';  // Remove newline charactes

		if (strcmp(choice, "1") == 0) {
			/* Version 1 */
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
		}

		else if (strcmp(choice, "2") == 0) {
			/* Version 2 */
			char phrases[BUFFER_SIZE]; // Buffer to store input phrases.
			char* nextPhrase = NULL;   // Pointer to hold each phrase token.
			int phrasesCounter;        // Counter to track the number of phrases processed.

			do {
				// Keep running until the user inputs "q" to quit.
				printf("Type a few phrases separated by comma (q - to quit):\n");
				fgets(phrases, BUFFER_SIZE, stdin); // Read input from stdin.
				phrases[strlen(phrases) - 1] = '\0'; // Replace the newline character at the end of input with a null terminator.

				if (strcmp(phrases, "q") != 0) {
					// If the user input is not "q":
					nextPhrase = strtok(phrases, ","); // Tokenize the first phrase using ',' as the delimiter.
					phrasesCounter = 1;               // Initialize the phrase counter to 1.

					while (nextPhrase) {
						// While there are tokens remaining:
						printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase);
						// Print the current phrase and increment the counter.

						nextPhrase = strtok(NULL, ",");
						// Continue tokenizing the string from the last position where it left off.
					}
				}
				
			} while (strcmp(phrases, "q") != 0);
			// Exit the loop when the user inputs "q".
		}
		else if (strcmp(choice, "3") == 0) {
			/* Version 3 */
			char sentences[BUFFER_SIZE]; // Buffer to store input sentences.
			char* nextSentence = NULL;   // Pointer to hold each sentence token.
			int sentencesCounter;        // Counter to track the number of sentences processed.

			do {
				printf("Type a few sentences separated by dot (q - to quit):\n");
				fgets(sentences, BUFFER_SIZE, stdin); // Read input from stdin.
				sentences[strlen(sentences) - 1] = '\0'; // Replace newline character with a null terminator.

				if (strcmp(sentences, "q") != 0) {
					nextSentence = strtok(sentences, "."); // Tokenize the first sentence using '.' as the delimiter.
					sentencesCounter = 1; // Initialize the sentence counter to 1.

					while (nextSentence) { // While there are tokens remaining:
						printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);
						nextSentence = strtok(NULL, "."); // Continue tokenizing the string from the last position.
					}
				}
			} while (strcmp(sentences, "q") != 0);
		}
		
		else if (strcmp(choice, "0") != 0) {
			printf("Invalid selection. Please choose:\n");
			printf("1 - Tokenize Words (space-separated)\n");
			printf("2 - Tokenize Phrases (comma-separated)\n");
			printf("3 - Tokenize Sentences (dot-separated)\n");
			printf("0 - Exit Tokenizing\n");
		}
	} while (strcmp(choice, "0") != 0);
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); // Prompt for the end of the demo.
}

#ifdef TESTING_MAIN
int main(void) {
	// Run the tokenizing function directly for testing
	tokenizing();
	return 0;
}
#endif