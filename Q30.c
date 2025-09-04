/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include <stdio.h>
int main()
{
    int n, reversed = 0, remainder;
    printf("Enter an integer : ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }
    printf("Reversed Number = %d\n", reversed);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                             PURPOSE
        n            int                    Input number to be reversed
     reversed        int                Variable to store the reversed number 
     remainder       int      Variable to store the last digit of n during each iteration
*/