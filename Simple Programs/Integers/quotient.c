/* This program gives the quotient of two numbers
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

//include standard input output library
#include <stdio.h>

int main(void)
{
    // declare variables
    int dividend, divisor, quotient, remainder;

    // prompt user for dividend and divisor
    printf("Enter the quotient: ");
    scanf("%d", &dividend);

    printf("Enter the remainder: ");
    scanf("%d", &divisor);

    // divison equation
    quotient = dividend / divisor;
    remainder = (quotient % divisor);

    // print the result of division and the remainder
    printf("The quotient of those two numbers is: %d\n", quotient);
    printf("The remainder is: %d\n", remainder);

    return 0;

}
