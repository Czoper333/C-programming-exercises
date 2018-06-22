/* This program check whether two variables are equal */

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
