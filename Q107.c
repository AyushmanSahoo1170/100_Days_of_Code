/*
Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each
element of the array in order of their appearance in the array. Previous greater element of an element in the array is the
nearest element on the left which is greater than the current element. If there does not exist next greater of current element,
then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.
*/

#include <stdio.h>
int main()
{
    int arr[100], n, i, j, prevGreater;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Previous Greater Elements : ");
    for(i = 0; i < n; i++)
    {
        prevGreater = -1;
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                prevGreater = arr[j];
                break;
            }
        }
        if(i != n - 1)
        {
            printf("%d, ", prevGreater);
        }
        else
        {
            printf("%d\n", prevGreater);
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
      arr[]          int              Array to store the input elements
        n            int               Number of elements in the array
    prevGreater      int       Previous greater element for the current element
        i            int              Loop counter for array traversal
        j            int        Loop counter to find previous greater element
*/