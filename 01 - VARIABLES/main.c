/*
	01 - VARIABLES
	I learned the main variables in C and how to show them in my terminal
*/

#include <stdio.h>

int main()
{
	int i = 17; // integer number
	char c = 'c'; // character
	float f = 13.6; // floating point number

	// to use variables in a function we must specify its type with %type (%d ; %c ; %f) and we give the variable name after
	printf("This is a integer => %d\n", i); // to show an integer we write %d in a string
	printf("This is a character => %c\n", c); // to show a character we write %c in a string
	printf("This is a floating point number => %f\n", f); // to show a floating point number we write %f in a string
	
	printf("YEAH MORE VARIABLES WOOO !!! \n integer => %d \n character => %c \n floating point number => %f \n", i, c, f);

	return 0;
}
