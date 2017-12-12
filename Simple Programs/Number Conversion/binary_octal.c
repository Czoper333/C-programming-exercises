/* This program convert binary to octal
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

#include <stdio.h>

int main(void)
{
    // declare variables
    long int binarynum, octalnum = 0, j = 1, remainder;

    printf("Enter the value for binary number: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    printf("Equivalent octal value: %lo", octalnum);
    return 0;
}
