/* This program is compute the sum of digits in a given integer
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

#include <stdio.h>

int main(void)
{
    // declare variables
    long number, temp, digit, sum = 0;

    // prompt user for the number
    printf("Enter an integer number: ");
    scanf("%ld", &number);
    temp = number;
    while (number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
