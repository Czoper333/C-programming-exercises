/* This program convert binary into decimals*/

#include <stdio.h>

int main(void)
{
    // declare variables
    int num, binary_val, decimal_val = 0, base = 1, rem;

    // prompt the user for input binary
    printf("Enter a binary number91s and 0s) \n");
    scanf("%d", &num);
    binary_val = num;

    // conversion of a binary number to a decimal number
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10;
        base = base *2;
    }

    // print results
    printf("The binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
}
