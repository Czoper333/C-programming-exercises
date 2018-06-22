/* This program check whether the number is divisible by 5 */

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
