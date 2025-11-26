/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the
element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not
necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

Follow-up (optional): Can you do it in O(n) Time Complexity?
*/

#include <stdio.h>
int main()
{
    int nums[100], n, i, j, count, majorityElement = -1;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(nums[j] == nums[i])
            {
                count++;
            }
        }
        if(count > n / 2)
        {
            majorityElement = nums[i];
            break;
        }
    }
    printf("Majority Element : %d\n", majorityElement);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
      nums[]         int               Array to store the input elements
        n            int                Number of elements in the array
        i            int                Loop counter for outer traversal
        j            int                Loop counter for inner traversal
      count          int           Count of occurrences of the current element
  majorityElement    int           To store the majority element of the array
*/