/* This program convert binary to hexadecimal */

#include <stdio.h>

int main(void)
{
    // declare variables
    long int binary, hexadecimal = 0, i = 1, remainder;

    printf("Enter the binary number: ");
    scanf("%ld", &binary);
    while (binary != 0)
    {
        remainder = binary % 10;
        hexadecimal = hexadecimal + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimal);
    return 0;
}
