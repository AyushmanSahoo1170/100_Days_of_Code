/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int num, original, remainder, digits = 0;
    double sum = 0.0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        digits++;
        num = num / 10;
    }
    num = original;
    while(num != 0)
    {
        remainder = num % 10;
        sum = sum + pow (remainder, digits);
        num = num / 10;
    }
    if(original == sum)
    {
        printf("It is an Armstrong Number.\n");
    }
    else
    {
        printf("It is not an Armstrong Number.\n");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                      PURPOSE
       num           int                    Input number to be checked for Armstrong property
     original        int                Variable to store the original input number for comparison
       sum          double       Variable to store the sum of digits raised to the power of number of digits
    remainder        int                Variable to store the last digit of n during each iteration
      digits         int                Variable to count the number of digits in the input number
*/