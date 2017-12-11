/*Program to print half pyramid using "#"
  This program is written by x.oper and this code is available
  on the git repository named "C-programming-exercises" at https://github.com/Czoper333*/

#include <stdio.h>

int main(void)
{
    //declare variables
    int i, j, rows;

    //prompt user for the number of rows of the pyramid
    printf("Enter number of rows \nto print half pyramid: ");
    scanf("%d",&rows);

    //print rows of the pyramid
    for(i=1; i<=rows; ++i)
    {
        //print #
        for(j=1; j<=i; ++j)
        {
            printf("# ");
        }
        //print new line for the each iteration
        printf("\n");
    }
    return 0;
}
