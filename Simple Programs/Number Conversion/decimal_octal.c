/* This program convert decimal to octal */

#include <stdio.h>

int main(void)
{
    // declare variables
    long decimal, remainder, quotient;
    int octal[100], i = 1, j;

    printf("Enter the decimal number: ");
    scanf("%ld", &decimal);
    quotient = decimal;
    while (quotient != 0)
    {
        octal[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal number %d is: ", decimal);
    for (j = i - 1; j > 0; j--)
        printf("%d", octal[j]);
    return 0;
}
