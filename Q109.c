/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of
size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
*/

#include <stdio.h>
int main()
{
    int arr[100], n, k, i, j, currentSum, maxSum = 0;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k : ");
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++)
    {
        currentSum = 0;
        for(j = i; j < i + k; j++)
        {
            currentSum = currentSum + arr[j];
        }
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }
    printf("Maximum sum of subarrays of size %d : %d\n", k, maxSum);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                      PURPOSE
      arr[]          int           Array to store the input elements
        n            int           Number of elements in the array
        k            int                Size of the subarray
    currentSum       int        Sum of the current subarray of size k
      maxSum         int        Maximum sum of all subarrays of size k
        i            int             Loop counter for outer loop
        j            int             Loop counter for inner loop
*/