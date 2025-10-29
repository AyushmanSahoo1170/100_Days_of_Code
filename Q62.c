/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include <stdio.h>
int main()
{
    int i, num, temp;
    printf("Enter number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < num / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }
    printf("Reversed Array : ");
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
       temp          int        Temporary variable to assist in swapping elements
*/