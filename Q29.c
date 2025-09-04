/*
Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

#include <stdio.h>
int main()
{
    int n, i, factorial = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of %d is : %d\n", n, factorial);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                             PURPOSE
        n            int         Input number for which factorial is to be calculated
        i            int                 Loop variable to iterate from 1 to n
    factorial        int           Variable to store the cumulative factorial value
*/