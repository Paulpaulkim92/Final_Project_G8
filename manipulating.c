#define _CRT_SECURE_NO_WARNINGS
#define _BUFFER_SIZE 80
#include "manipulating.h"

void manipulating() {
	// /* Version 1 */
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


	/* Version 2 */
	/*The program allows the user to compare two strings and determine their lexicographical order. It repeatedly asks for two strings to compare until the user enters "q" to quit.*/
	printf(" *** Start of Comparing Strings Demo *** \n");
	char comparel[_BUFFER_SIZE];
	char compare2[_BUFFER_SIZE];
	int result;
	do {
		printf("Type the 1st string to compare (q - to quit) :\n");
		// Read the first string
		fgets(comparel, _BUFFER_SIZE, stdin);
        // Remove the newline character from input
		comparel[strlen(comparel) - 1] = '\0';

		
		if (strcmp(comparel, "q") != 0) {
			printf("Type the 2nd string to compare:\n");
             // Read the second string
			fgets(compare2, _BUFFER_SIZE, stdin);

			compare2[strlen(compare2) - 1] = '\0';

			 // Compare the two strings and store the result
			result = strcmp(comparel, compare2);
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", comparel, compare2);
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'n", comparel, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'n", comparel, compare2);

		}
	 } while (strcmp(comparel, "q") != 0);
		printf(" *** End of Comparing Strings Demo *** n\n");
	
// 	/* Version 3 */ // 	/*The program allows the user to search for a substring (needle) within a larger string (haystack) and returns the position of the first occurrence of the substring. It continues to process inputs until the user enters "q" to quit.*/ 
printf(" *** Start of Searching Strings Demo *** \n");
    
    char haystack[_BUFFER_SIZE];
    char needle[_BUFFER_SIZE];
    char *occurrence = NULL;
    
    do {
        printf("Type the string (q - to quit): \n");
        fgets(haystack, _BUFFER_SIZE, stdin);
        haystack[strlen(haystack) - 1] = '\0'; // Remove newline character
        
        if (strcmp(haystack, "q") != 0) {
            printf("Type the substring: \n");
            fgets(needle, _BUFFER_SIZE, stdin);
            needle[strlen(needle) - 1] = '\0'; // Remove newline character
            
            occurrence = strstr(haystack, needle);
            
            if (occurrence) {
                printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
            } else {
                printf("Not found\n");
            }
        }
    } while (strcmp(haystack, "q") != 0);
    
    printf(" *** End of Searching Strings Demo *** \n\n");

}
