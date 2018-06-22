/* This program convert binary into decimals and count the number of 1s */

#include <stdio.h>

int main(void)
{
    // declare variables
    long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;

    // prompt the user for the input
    printf("Enter a decimal integer: \n");
    scanf("%ld", &num);
    decimal_num = num;

    // conversion decimal to binary
    while (num > 0)
    {
        remainder = num % 2;

        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }

    // print the results
    printf("Input number is = %d\n", decimal_num);
    printf("Its binary equivalent is = %ld\n", binary);
    printf("No.of 1's in the binary number is = %d\n", no_of_1s);

    return 0;
}
