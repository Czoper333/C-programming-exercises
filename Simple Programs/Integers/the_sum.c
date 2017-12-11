/* This program gives sum of addition of two integer numbers
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

//include standard input output library
#include <stdio.h>

int main(void)
{
    // declare variables
    int a, b, sum;

    // prompt user for two numbers to add
    printf("Enter the first number to add: ");
    scanf("%d", &a);
    printf("Enter the second number to add: ");
    scanf("%d", &b);
    sum = a + b;

    // print the result of addition
    printf("The sum of %d and %d is: %d\n", a, b, sum);
    return 0;
}
