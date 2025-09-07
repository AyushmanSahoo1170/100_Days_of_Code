/*
Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>
int main()
{
    int n, original, reversed = 0, remainder;
    printf("Enter an integer : ");
    scanf("%d", &n);
    original = n;
    while(n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }
    if(original == reversed)
    {
        printf("It is a Palindrome Number.\n");
    }
    else
    {
        printf("It is not a Palindrome Number.\n");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                               PURPOSE
       num           int                Input number to be checked for palindrome
     original        int         Variable to store the original input number for comparison
     reversed        int                  Variable to store the reversed number 
     remainder       int         Variable to store the last digit of n during each iteration
*/