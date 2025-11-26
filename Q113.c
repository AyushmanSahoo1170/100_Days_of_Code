/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element
in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
*/

#include <stdio.h>
int main()  
{
    int arr[100], n, k, i, j, temp;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k : ");
    scanf("%d", &k);
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The %dth smallest element in the array is : %d\n", k, arr[k - 1]);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                       PURPOSE
      arr[]          int            Array to store the input elements
        n            int             Number of elements in the array
        k            int       The kth position to find the smallest element
      temp           int         Temporary variable for swapping elements
        i            int               Loop counter for outer loop
        j            int               Loop counter for inner loop
*/