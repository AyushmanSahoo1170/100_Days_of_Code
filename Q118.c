/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one.
Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/

#include <stdio.h>
int main()
{
    int nums[100], n, i, totalSum, arraySum = 0;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        arraySum = arraySum + nums[i];
    }
    totalSum = n * (n + 1) / 2;
    printf("The missing number is : %d\n", totalSum - arraySum);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                        PURPOSE
      nums[]         int             Array to store the input elements
        n            int              Number of elements in the array
     totalSum        int              Sum of first n natural numbers
     arraySum        int        Sum of elements present in the input array
        i            int       Loop counter for iterating through the array
*/