#define _CRT_SECURE_NO_WARNINGS
#define _BUFFER_SIZE 80
#include "manipulating.h"

void manipulating() {
	/* Version 1 */
	printf("*** Start of concatenating Strings Demo ***\n");
	// Declare two character arrays (strings) with a buffer size of _BUFFER_SIZE
	char string1[_BUFFER_SIZE];
	char string2[_BUFFER_SIZE];
	// Loop to continuously ask for input and concatenate strings
	do {
		// Prompt the user to enter the first string
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, _BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';

		// Check if the input is not "q" to continue with the concatenation
		if ((strcmp(string1, "q") != 0)) {
			// Prompt the user to enter the second string
			printf("Type the 2nd string:\n");
			fgets(string2, _BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';
			// Concatenate string2 to string1
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);
	// Loop continues until the user types "q"
	printf(" *** End of Concatenating Strings Demo *** \n\n");
		

}