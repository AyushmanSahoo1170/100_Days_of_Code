/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray
using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative)
element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25
*/

#include <stdio.h>
int main()  
{
    int arr[100], n, i, maxSoFar, maxEndingHere;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxSoFar = arr[0];
    maxEndingHere = arr[0];
    for(i = 1; i < n; i++)
    {
        if(maxEndingHere + arr[i] > arr[i])
        {
            maxEndingHere = maxEndingHere + arr[i];
        }
        else
        {
            maxEndingHere = arr[i];
        }

        if(maxEndingHere > maxSoFar)
        {
            maxSoFar = maxEndingHere;
        }
    }
    printf("Maximum sum of contiguous subarray : %d\n", maxSoFar);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                  PURPOSE
      arr[]          int                      Array to store the input elements
        n            int                       Number of elements in the array
     maxSoFar        int              Maximum sum of any contiguous subarray found so far
   maxEndingHere     int        Maximum sum of contiguous subarray ending at the current position
        i            int                                Loop counter
*/