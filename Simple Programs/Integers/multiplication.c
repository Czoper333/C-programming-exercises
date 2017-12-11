/* This program gives result of multiplication of two float numbers
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

//include standard input output library
#include <stdio.h>

int main(void)
{
    // declare variables
    double multiplicand, multiplier, result;

    // prompt user to input the multiplicand and multiplier
    printf("Enter the float number multiplicand: ");
    scanf("%lf", &multiplicand);
    printf("Enter the float number multiplier: ");
    scanf("%lf", &multiplier);
    result = multiplicand * multiplier;

    // print the result of multiplication
    printf("The result of multiplication is: %.2lf", result);

    return 0;
}
