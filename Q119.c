/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element.
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>
int main()
{
    int nums[100], n, i, j;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                printf("The repeated element is : %d\n", nums[i]);
                return 1;
            }
        }
    }
    printf("No repeated element found\n");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                   PURPOSE
      nums[]         int        Array to store the input elements
        n            int         Number of elements in the array
        i            int          Loop counter for outer loop
        j            int          Loop counter for inner loop
*/