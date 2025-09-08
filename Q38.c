/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>
int main()
{
    int num, sum = 0, digits;
    printf("Enter an integer : ");
    scanf("%d", &num);
    while(num != 0)
    {
        digits = num % 10;
        sum = sum + digits;
        num = num / 10;
    }
    printf("Sum of digits is : %d\n", sum);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                       PURPOSE
       num           int       Input number whose digits are to be summed
      digits         int         Variable to store the last digit of num
       sum           int       Variable to accumulate the sum of the digits
*/