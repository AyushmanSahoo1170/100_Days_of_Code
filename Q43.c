/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>
int main()
{
    int num, original, digit, sum = 0, fact, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    original = num;
    while(num > 0)
    {
        digit = num % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == original)
    {
        printf("It is a Strong Number");
    }
    else
    {
        printf("It is not a Strong NUmber");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                   PURPOSE
       num           int              Input number to check if it is a strong number or not
     original        int              Variable to store the original input number for output
      digit          int                     Variable to store the last digit of num
       sum           int         Variable to accumulate the sum of the factorials of the digits
      fact           int              Variable to store the factorial of the current digit
        i            int              Loop counter to calculate the factorial of the digit 
*/