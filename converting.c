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


	/* Version 2 */
	printf("*** Start of Converting String to double Demo ***\n"); //Intro to converting strings to double
	char doubleString[BUFFER_SIZE];
	double doubleNumber;
	do {// This program/section runs until the user decides to quit. if the one above is quitted, it will go to this one.
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin); //fgets will read every character of user input until BUFFER_SIE - 1.
		doubleString[strlen(doubleString) - 1] = '\0';
		if ((strcmp(doubleString, "q") != 0)) { //If the user input is NOT q
			doubleNumber = atof(doubleString); //This will convert the user input to a double/float
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0); //Section will quit if the input is q.
	printf("*** End of Converting String to double Demo ***\n\n");
}


	/* Version 3 */
	//>> insert here