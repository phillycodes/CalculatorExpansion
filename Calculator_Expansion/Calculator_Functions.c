/*
 * File Name:		Calculator_Functions.c
 * Names:			Philben Pierre
 * Course:			COP 2220C at Valencia College
 * Professor:		David Stendel
 * Description:		The first thing to show up in the program is a calculator menu. The menu has 9
 *					options to choose from. Enter values, add, subtract, multiply, divide,
 *					average, maximum value, an option to determine whether each value entered is
 *					positive, negative or zero, and a quit option.
 *					The program presents the menu and requests for an input from the user.
 *					If the user enters an input that is not prompted in the menu then
 *					an error message will pop-up informing the user that they had entered an
 *					invalid entry. The program allows the user to try again. For a few of the
 *					options the user cannot select them without first selecting "Enter Values".
 *					If the user tries to do so without entering the values then an error message
 *					will pop up saying that they have not entered any values. The user can chose as
 *					they please until they select 'Q' for quit. After doing so they will be thanked
 *					for using the application.
 * Date:			3/14/21 - 3/24/21
 */

 // Preprocessor Directives
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Constants
#define SIZE 3

/*
 * Name:			CalculateAddition
 * Parameters:		Array of type float.
 * Processes:		The function will take in a float array and perform the operation of addition
 *					to each element in the array and return that value.
 * Return Value:	Float
 */
float CalculateAddition(float numArr[SIZE]) {
	// Variables
	int i;
	float result;

	// Calculations 
	result = numArr[0];
	for (i = 1; i < SIZE; i++) {
		result += numArr[i];
	}
	return result;
}

/*
 * Name:			CalculateDifference
 * Parameters:		Array of type float.
 * Processes:		Function will calculate the difference between each of the values within the
 *					array passed in as a parameter. Afterwards it will return the float value.
 * Return Value:	Float.
 */
float CalculateDifference(float numArr[SIZE]) {
	// Variables
	int i;
	float result;

	// Calculations 
	result = numArr[0];
	for (i = 1; i < SIZE; i++) {
		result -= numArr[i];
	}

	return result;
}

/*
 * Name:			CalculateMultiplication
 * Parameters:		Array of type float.
 * Processes:		Function will multiply each value within the array numArr to each other.
 *					Afterwards it will return the float value.
 * Return Value:	Float.
 */
float CalculateMultiplication(float numArr[SIZE]) {
	// Variables
	int i;
	float result;

	// Calculations 
	result = numArr[0];
	for (i = 1; i < SIZE; i++) {
		result *= numArr[i];
	}

	return result;
}

/*
 * Name:			CalculateAverage
 * Parameters:		Array of type float.
 * Processes:		Function will calculate the average between the values within the
 *					array numArr. Afterwards it will return the float value.
 * Return Value:	Float.
 */
float CalculateAverage(float numArr[SIZE]) {
	// Variables
	int i;
	float result;
	result = numArr[0];

	// Calculations
	for (i = 1; i < SIZE; ++i) {
		result += numArr[i];

	}
	result = result / SIZE;

	return result;
}

/*
 * Name:			CalculateDivision
 * Parameters:		Array of type float.
 * Processes:		Function will divide each of the values within the array as long as it does not
 *					encounter a zero. If it does then the function will output an error message
 *					Afterwards, if no zeroes are found after the first element the function will
 *					return a float value.
 * Return Value:	Float.
 */
float CalculateDivision(float numArr[SIZE]) {
	// Variables
	int i;
	float result;
	result = numArr[0];

		// Calculations 
	result = numArr[0];
	for (i = 1; i < SIZE; i++) {
		result /= numArr[i];
	}

	return result;
}

/*
 * Name:			DetermineValueState
 * Parameters:		Array of type float.
 * Processes:		Function will determine whether or not if each element within the array is positive,
 *					negative, or zero and output.
 * Return Value:	None.
 */
void DetermineValueState(float numArr[SIZE]) {
	// Variables
	int i;

	// Calculation
	for (i = 0; i < SIZE; i++) {
		if (numArr[i] > 0) {
			printf("%.3f is Positive.\n", numArr[i]);
		} else if (numArr[i] < 0) {
			printf("%.3f is Negative.\n", numArr[i]);
		} else {
			printf("%.3f is Zero.\n", numArr[i]);
		}
	}
}

/*
 * Name:			DisplayMenu
 * Parameters:		None.
 * Processes:		Outputs the menu option available to the user.
 * Return Value:	None.
 */
void DisplayMenu() {
	// Input Selection Menu
	printf("Calculator Menu\n\n");
	printf("(E)nter Values\n");
	printf("(A)dd\n");
	printf("(S)ubtract\n");
	printf("(M)ultiply\n");
	printf("(D)ivide\n");
	printf("A(V)erage\n");
	printf("(G)reatest Value\n");
	printf("(P)ositive, Negative, or Zero\n");
	printf("(Q)uit\n");
	printf("Enter Selection: ");
}


/*
 * Name:			getGreatestValue
 * Parameters:		Array of type float.
 * Processes:		Function will return the greatest value in the array provideed in the
 *					parameter.
 * Return Value:	Float.
 */
float getGreatestValue(float numArr[SIZE]) {
	// Variables
	int i;
	float result;

	// Determination
	result = numArr[0];
	for (i = 1; i < SIZE; i++) {
		if (numArr[i] > result) {
			result = numArr[i];
		}
	}

	return result;
}

/*
 * Name:			isZeroFound
 * Parameters:		Array of type float.
 * Processes:		The function will determine if the array has a zero. If the array has a zero
 *					then the function will return true.
 * Return Value:	Boolean.
 */
bool isZeroFound(float numArr[SIZE]) {
	int i;
	bool foundZero = false;

	// Checking For Zero After The First Value
	for (i = 1; i < SIZE; i++) {
		if (numArr[i] == 0) {
			foundZero = true;
		}
	}

	return foundZero;
}

/*
 * Name:			PrintArray
 * Parameters:		Array of type float.
 * Processes:		Function will output an array passed in the parameter.
 * Return Value:	None.
 */
void PrintArray(float numArray[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		printf("%.3f\n", numArray[i]);
	}
}

/*
 * Name:			ProcessMenu
 * Parameters:		Character, double array, and an integer.
 * Processes:
 * Return Value:	None.
 */
void ProcessMenu(char choice, float numArrs[], bool *valuesEntered, float *result) {
	// Variables
	int i;

	// Menu Input Process
	switch (choice) {
		case 'e':
		case 'E':
			// Output - Requesting Input 
			printf("Enter %i numbers separated with a space: ", SIZE);

			// Gets Input
			for (i = 0; i < SIZE; i++) {
				scanf_s("%f", &numArrs[i]);
			}
			*valuesEntered = true;
			break;
		case 'a':
		case 'A':
			// Validation - The User Must Already Have Entered The Values In Order To Perform The
			// Calculation
			if (*valuesEntered == true) {
				*result = CalculateAddition(numArrs);

				// Output
				printf("Answer: \n");
				for (i = 0; i < SIZE - 1; i++) {
					printf("%.3f + ", numArrs[i]);
				}
				printf("%.3f = %.3f\n", numArrs[i], *result);
			} else {
				printf("\n\tError: You have not entered %i numbers!\n\n", SIZE);
			}

			break;
		case 's':
		case 'S':
			// Validation - The User Must Already Have Entered The Values In Order To Perform The
			// Calculation
			if (*valuesEntered == true) {
				*result = CalculateDifference(numArrs);

				// Output
				printf("Answer: \n");
				for (i = 0; i < SIZE - 1; i++) {
					printf("%.3f - ", numArrs[i]);
				}
				printf("%.3f = %.3f\n", numArrs[i], *result);
			} else {
				printf("\n\tError: You have not entered %i numbers!\n\n", SIZE);
			}
			break;
		case 'm':
		case 'M':
			// Validation - The User Must Already Have Entered The Values In Order To Perform The
			// Calculation
			if (*valuesEntered == true) {
				*result = CalculateMultiplication(numArrs);

				// Output
				printf("Answer: \n");
				for (i = 0; i < SIZE - 1; i++) {
					printf("%.3f * ", numArrs[i]);
				}
				printf("%.3f = %.3f\n", numArrs[i], *result);
			} else {
				printf("\n\tError: You have not entered %i numbers!\n\n", SIZE);
			}
			break;
		case 'd':
		case 'D':
			// Validation - The User Must Already Have Entered The Values In Order To Perform The
			// Calculation
			if (*valuesEntered == true) {
				if (isZeroFound(numArrs) == true) {
					printf("\n\tError: You cannot divide by zero!\n\n");
				} else {
					*result = CalculateDivision(numArrs);
				}

				// Output
				printf("Answer: \n");
				for (i = 0; i < SIZE - 1; i++) {
					printf("%.3f / ", numArrs[i]);
				}
				printf("%.3f = %.3f\n", numArrs[i], *result);
			} else {
				printf("\n\tError: You have not entered %i numbers!\n\n", SIZE);
			}
			break;
		case 'v':
		case 'V':
			// Validation - The User Must Already Have Entered The Values In Order To Perform The
			// Calculation
			if (*valuesEntered == true) {
				*result = CalculateAverage(numArrs);
				printf("Answer: (");
				for (i = 0; i < SIZE - 1; i++) {
					printf("%.3f + ", numArrs[i]);
				}
				printf("%.3f) / %i = %.3f\n", numArrs[i], SIZE, *result);
			} else {
				printf("\n\tError: You have not entered %i numbers!\n\n", SIZE);
			}
			break;
		case 'g':
		case 'G':
			// Validation - The User Must Already Have Entered The Values In Order To Perform The
			// Calculation
			if (*valuesEntered == true) {
				*result = getGreatestValue(numArrs);
				printf("Answer: %.3f\n", *result);
			} else {
				printf("\n\tError: You have not entered %i numbers!\n\n", SIZE);
			}
			break;
		case 'p':
		case 'P':
			DetermineValueState(numArrs); // Positive, Negative, or Zero
			break;
		case 'q':
		case 'Q':
			printf("Good-Bye! Thanks for using my program!\n");
			break;
		default:
			printf("\n\tError: You have made an invalid selection.\n\n");
	}
}

// Function Prototype(s)
float CalculateAddition(float numArr[SIZE]);
float CalculateDifference(float numArr[SIZE]);
float CalculateAverage(float numArr[SIZE]);
float CalculateDivision(float numArr[SIZE]);
float CalculateMultiplication(float numArr[SIZE]);
void DetermineValueState(float numArr[SIZE]);
void DisplayMenu();
float getGreatestValue(float numArr[SIZE]);
bool isZeroFound(float numArr[SIZE]);
void PrintArray(float numArr[SIZE]);
void ProcessMenu(char choice, float numArrs[], bool *valuesEntered, float *result);

/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		First thing to show up in the function is a calculator menu. The menu has nine
 *					options to choose from. Enter Values, add, subtract, multiply, divide,
 *					average, maximum value, a possibility to decide whether each value entered is
 *					positive, negative or zero, and a quit option.
 *					The function presents the menu and requests for an input from the keyboard.
 *					If the user enters an input that is not prompted in the menu then
 *					an error message will pop-up informing the user that they had entered an
 *					invalid entry. The function has a loop to try again. For a few of the
 *					cases the user cannot select them without first selecting "Enter Values".
 *					If the user tries to do so without entering the values then an error message
 *					will pop up. The user can continously make different choices as
 *					they please until they select 'Q' for quit. After doing so they will be thanked
 *					for using the application.
 * Return Value:	An integer representing an error code; if the program ends without error, zero
 *					will be returned to the calling program or operating system.
 */
int main() {
	// Variables
	float *result = 0;
	char menuChoice = '\0';
	float numbers[SIZE] = { 0 };
	bool *valuesEntered = false;
	bool foundZero = false;
	int i;

	// Output Selection Menu
	do {
		// Something
		DisplayMenu();
		scanf_s(" %c", &menuChoice, 1);

		// Comment
		ProcessMenu(menuChoice, &numbers, &valuesEntered, &result);
	} while (menuChoice != 'q' && menuChoice != 'Q'); // Loop Until The User Enters Q
	PrintArray(numbers);

	return 0;
}