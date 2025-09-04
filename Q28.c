/*
Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>
int main()
{
    int n, i, product = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }
    printf("The product of even numbers from 1 to %d is : %d\n", n, product);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                             PURPOSE
        n            int         Input number up to which even numbers are multiplied
        i            int            Loop variable to iterate through even numbers
     product         int       Variable to store the cumulative product of even numbers
*/