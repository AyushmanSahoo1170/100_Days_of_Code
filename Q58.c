/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>
int main()
{
    int num, i, max, min;
    printf("Enter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 1; i < num; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
       max           int       Variable to store the maximum element in the array
       min           int       Variable to store the minimum element in the array
*/