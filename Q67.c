/*
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/

#include <stdio.h>
int main()
{
    int i, num, target, pos = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the target element to insert : ");
    scanf("%d", &pos);
    printf("Enter the target element to insert : ");
    scanf("%d", &target);
    for(i = num; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = target;
    num++;
    printf("The array after insertation is : ");
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
      target         int      Variable to store the target element to be inserted
       pos           int   Variable to store the position where the target is to be inserted
*/