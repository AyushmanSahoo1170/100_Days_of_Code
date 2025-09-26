/*
Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/

#include <stdio.h>
int main()
{
    int num, sum = 0, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == num)
    {
        printf("It is a Perfect Number");
    }
    else
    {
        printf("It is not a Perfect Numeber");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                       PURPOSE
       num           int                  Input number to check if it is a perfect number or not
       sum           int           Variable to store the sum of all proper divisord of the input number
        i            int                Loop counter to iterate through all numbers from 1 to num/2
*/