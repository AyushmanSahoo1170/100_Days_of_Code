/*
Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }
    printf("The sum of first %d odd numbers is : %d\n", n, sum);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                             PURPOSE
        n            int             Input number of first n odd numbers to sum
        i            int               Loop variable to iterate from 1 to n
       sum           int          Variable to store the cumulative sum of odd numbers
*/