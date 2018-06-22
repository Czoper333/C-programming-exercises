/* This program convert a given number of days in terms of Years, Weeks & Days */

// declare constant variable
#define DAYSINWEEK 7

#include <stdio.h>

int main(void)
{
    // declare variables
    int ndays, year, week, days;

    // prompt the user for input
    printf("Enter the number of days\n");
    scanf("%d", &ndays);

    // equation
    year = ndays / 365;
    week = (ndays % 365) / DAYSINWEEK;
    days = (ndays % 365) % DAYSINWEEK;

    // print the result
    printf("%d is equivalent to %d years, %d weeks and %d days", ndays, year, week, days);

    return 0;
}
