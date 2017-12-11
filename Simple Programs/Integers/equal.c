/* This program check whether two variables are equal
   This program is written by x.oper and this code is available
   on the git repository at https://github.com/Czoper333 */

#include <stdio.h>

int main(void)
{
    // declare variables
    int A, B;

    // prompt the user for two values
    printf("Enter the values for A: ");
    scanf("%d", &A);
    printf("Enter the values for B: ");
    scanf("%d", &B);

    // condition statement to check whether A is equal B
    if (A == B)
        printf("A is equal B");
    else
        printf("A is not equal B");

    return 0;
}
