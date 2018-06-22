/* This program gives result of multiplication of two float numbers */

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
