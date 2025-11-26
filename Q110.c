/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each
subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2
*/

#include <stdio.h>
int main()  
{
    int arr[100], n, k, i, j, maxElement;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k : ");
    scanf("%d", &k);
    printf("Maximum elements in each subarray of size %d : ", k);
    for(i = 0; i <= n - k; i++)
    {
        maxElement = arr[i];
        for(j = i; j < i + k; j++)
        {
            if(arr[j] > maxElement)
            {
                maxElement = arr[j];
            }
        }
        if(i != n - k)
        {
            printf("%d ", maxElement);
        }
        else
        {
            printf("%d\n", maxElement);
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                      PURPOSE
      arr[]          int           Array to store the input elements
        n            int            Number of elements in the array
        k            int                 Size of the subarray
    maxElement       int    Maximum element in the current subarray of size k
        i            int             Loop counter for outer loop
        j            int             Loop counter for inner loop
*/