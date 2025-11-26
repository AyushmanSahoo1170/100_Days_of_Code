/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements
between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such
integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
*/

#include <stdio.h>
int main()
{
    int n, x, pivotInteger = -1, leftSum, rightSum;
    printf("Enter a positive integer n : ");
    scanf("%d", &n);
    for(x = 1; x <= n; x++)
    {
        leftSum = (x * (x + 1)) / 2;
        rightSum = ((n * (n + 1)) / 2) - ((x * (x - 1)) / 2);
        if(leftSum == rightSum)
        {
            pivotInteger = x;
            break;
        }
    }
    printf("Pivot Integer : %d\n", pivotInteger);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                     PURPOSE
        n            int             The positive integer input
   pivotInteger      int            The pivot integer to be found
     leftSum         int       Sum of integers from 1 to x inclusively
     rightSum        int       Sum of integers from x to n inclusively
        x            int       Loop counter to find the pivot integer
*/