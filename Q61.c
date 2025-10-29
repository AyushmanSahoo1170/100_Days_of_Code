/*
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/

#include <stdio.h>
int main()
{
    int i, num, search;
    printf("Enter number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d", &search);
    for(i = 0; i < num; i++)
    {
        if(arr[i] == search)
        {
            printf("Found at index '%d'\n", i);
            break;
        }
        if(i == num - 1)
        {
            printf("-1\n");
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
      search         int   Variable to store the element to be searched in the array
*/