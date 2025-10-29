/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/

#include <stdio.h>
int main()
{
    int i, num, first = 0, second = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    if(num < 2)
    {
        printf("The array must have at least two elements to find the second largest element. \n");
        return 1;
    }
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > first)
        {
            first = arr[i];
        }
    }
    for(i = 0; i < num; i++)
    {
        if(arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    printf("The second largest element in the array is : %d\n", second);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
      first          int      Variable to store the largest element in the array
      second         int   Variable to store the second largest element in the array
*/