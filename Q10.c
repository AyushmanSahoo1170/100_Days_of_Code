/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds:\n");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    printf("%d:%d:%d", hours, minutes, seconds);
    return 0;
}

/*
Variable Description:
       VARIABLE        TYPE                       PURPOSE
    total_seconds      int                 Input time in seconds
        hours          int           Calculate hours from total seconds
       minutes         int      Calculate remaining minutes from total seconds
       seconds         int      Calculate remaining seconds from total seconds
*/