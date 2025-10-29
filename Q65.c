/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/

#include <stdio.h>
int main()
{
    int i, num, target, left, right, mid, foundIndex = -1;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element to search : ");
    scanf("%d", &target);
    left = 0;
    right = num - 1;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(arr[mid] == target)
        {
            foundIndex = mid;
            break;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if(foundIndex != -1)
    {
        printf("Found at index %d\n", foundIndex);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                  PURPOSE
        i            int                 Loop counter to iterate through array elements
       num           int                      Input number of elements in the array
      arr[]          int                        Array to store the input elements
      target         int              Variable to store the target element to be searched
       left          int                    Left boundary index for binary search 
       right         int                    Right boundary index for binary search
        mid          int                  Middle index calculated during binary search
    foundIndex       int        Variable to store the index of the found element (-1 if not found)
*/