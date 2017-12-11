/*Program prompt the user for two integers A and B and swap their values
  This program is written by x.oper and this code is available
  on the git repository at https://github.com/Czoper333 */

#include <stdio.h>
void swap(float *ptr1, float *ptr2);

void main()
 {
     // declare variables
     float a, b;

     // prompt the user for two integer numbers
     printf("Enter first integer number to swap: ");
     scanf("%f", &a);

     printf("Enter second integer number to swap: ");
     scanf("%f", &b);

     printf("Before swapping A is %5.2f B is %5.2f\n", a, b);

     // use of swap function
     swap(&a, &b);
     printf("After swaping A is %5.2f B is %5.2f\n", a, b);
 }
     // body of swap function
void swap(float *ptr1, float *ptr2)
{
    float temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
