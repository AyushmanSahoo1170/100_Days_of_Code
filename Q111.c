/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer
in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the
results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0
*/

#include <stdio.h>
int main()  
{
    int arr[100], n, k, i, j, firstNegative;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k : ");
    scanf("%d", &k);
    printf("First negative integers in each subarray of size %d : ", k);
    for(i = 0; i <= n - k; i++)
    {
        firstNegative = 0;
        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }
        if(i != n - k)
        {
            printf("%d ", firstNegative);
        }
        else
        {
            printf("%d\n", firstNegative);
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                             PURPOSE
      arr[]          int                 Array to store the input elements
        n            int                  Number of elements in the array
        k            int                      Size of the subarray
  firstNegative      int      First negative integer in the current subarray of size k
        i            int                   Loop counter for outer loop
        j            int                   Loop counter for inner loop
*/