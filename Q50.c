/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.
*/

#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(j = i; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int               Loop counter to print each row
        j            int      Loop counter to print spaces and stars in each row
*/