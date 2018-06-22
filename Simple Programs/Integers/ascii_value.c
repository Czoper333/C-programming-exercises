/* This program find and then print ASCII Value of a Character */

//include standard input output library
#include <stdio.h>

int main(void)
{
    // declare variables
    int character;

    // prompt user for the character
    printf("Enter the character: ");
    scanf("%c", &character);

    // print the character and its ASCII table value
    printf("The ASCII value of the character: %c is: %d",character, character);

    return 0;
}
