#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

void converting(void) {
	/* Version 1 */
	printf("*** Start of Converting Strings to int Demo ***\n"); //Prints Intro of the Convering function
	char	intString[BUFFER_SIZE];
	int		intNumber;
	do {//This program/section will run until the user decides to quit.
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin); //fgets will read every character of user input until BUFFER_SIZE - 1. 
		intString[strlen(intString) - 1] = '\0';
		if (strcmp(intString, "q") != 0) { //If the user input is NOT q
			intNumber = atoi(intString); //This will convert the user input to a number.
			printf("Converted number is %d\n", intNumber); //This returns the result of the conversion.
		}
	} while (strcmp(intString, "q") != 0); // Function will end if the input is q.
	printf("*** End of Converting Strings to int Demo ***\n\n");
}

	/* Version 2 */
	//>> insert here


	/* Version 3 */
	//>> insert here


