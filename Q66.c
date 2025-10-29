/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
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
    printf("Enter the target element to insert : ");
    scanf("%d", &target);
    pos = num;
    for(i = 0; i < num; i++)
    {
        if(arr[i] > target)
        {
            pos = i;
            break;
        }
        else
        {
            pos = num;
        }
    }
    for(i = num; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = target;
    num++;
    printf("The array after insertion is : ");
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