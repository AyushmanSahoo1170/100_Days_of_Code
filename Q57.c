/*
Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/

#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elememts of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of the elememts of the array is : %d\n", sum);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
       sum           int        Variable to accumulate the sum of array elements      
*/