/* This program convert binary to hexadecimal
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

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
