/*Program to print half pyramid using "#" */

#include <stdio.h>

int main(void)
{
    //declare variables
    int rows, i, j;

    //prompt user for the number of rows of the pyramid
    printf("Enter the number of rows \nto print half pyramid: ");
    scanf("%d", &rows);

    //print rows of the pyramid
    for(i = 1; i <= rows; ++i)
    {
        //print #
        for(j = 1; j <= i; ++j)
        {
            printf("# ");
        }
        //print new line for the each iteration
        printf("\n");
    }
    return 0;
}
