/*
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year
*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
    return 0;
}

/*
Variable Description:
       VARIABLE        TYPE                       PURPOSE
         year          int      Input year to check if it is a leap year or not

*/
