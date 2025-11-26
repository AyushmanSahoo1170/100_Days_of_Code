/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all
the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.
*/

#include <stdio.h>
int main()
{
    int nums[100], n, i, j, product;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Product Array : ");
    for(i = 0; i < n; i++)
    {
        product = 1;
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * nums[j];
            }
        }
        if(i != n - 1)
        {
            printf("%d, ", product);
        }
        else
        {
            printf("%d\n", product);
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
      nums[]         int                Array to store the input elements
        n            int                 Number of elements in the array
     product         int        Product of all elements except the current element
        i            int                 Loop counter for the outer loop
        j            int                 Loop counter for the inner loop
*/