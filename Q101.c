/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array
might be repeated. You need to print the first and last occurrence of the target and print the index of first and last
occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

Follow-up(optional): Can you do it in O(log n) Time Complexity?
*/

#include <stdio.h>
int main()
{
    int nums[100], n, target, first = -1, last = -1, i;
    printf("Enter number of elements in sorted array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value : ");
    scanf("%d", &target);
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    printf("First and Last occurrence indices : %d,%d\n", first, last);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                      PURPOSE
      nums[]         int          Array to store the sorted elements
        n            int        Number of elements in the sorted array
      target         int             The target integer to find
      first          int      Index of the first occurrence of the target
       last          int      Index of the last occurrence of the target
        i            int           Loop counter for array traversal
*/