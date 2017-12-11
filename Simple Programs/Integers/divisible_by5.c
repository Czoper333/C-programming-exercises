/* This program check whether the number is divisible by 5
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

// include standard input output library
#include <stdio.h>

int main(void)
{
    // declare variables
    int number;

    // prompt the user for the number
    printf("Enter the number to check whether is divisble by 5: ");
    scanf("%d", &number);

    // condition statement to check whether the number is divisible by 5
    if (number % 5 == 0)
        printf("%d is divisible by 5\n", number);
    else
        printf("%d is not divisble by 5\n", number);

    return 0;
}
