/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/

#include <stdio.h>
int main()
{
    int i, num, pos = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the target element to delete : ");
    scanf("%d", &pos);
    for(i = pos; i < num - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    num--;
    printf("The array after deletion is : ");
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
       pos           int   Variable to store the position of the element to be deleted
*/