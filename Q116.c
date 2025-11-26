/*
Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly
one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution
exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1
*/

#include <stdio.h>
int main()  
{
    int nums[100], n, target, i, j;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target value : ");
    scanf("%d", &target);
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                return 1;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                    PURPOSE
      nums[]         int         Array to store the input elements
        n            int          Number of elements in the array
      target         int        The target sum to find in the array
        i            int            Loop counter for outer loop
        j            int            Loop counter for inner loop
*/