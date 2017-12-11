/* This program check whether the number is odd or even
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

//include standard input output library
#include <stdio.h>

int main(void)
{
    //declare variables
    int number;

    //prompt user for an integer number
    printf("Enter an integer: ");
    scanf("%d", &number);

    //condition return true value while number is divisible by two
    if (number % 2 == 0)
        printf("%d - this number is even ", number);
    else
        printf("%d - this number is odd ", number);

    return 0;
}
