/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>
int main()
{
    int num1, num2, i;
    printf("Enter the number of elements in the first array : ");
    scanf("%d", &num1);
    int arr1[num1];
    printf("Enter the elements of the first array separated by space : ");
    for(i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array : ");
    scanf("%d", &num2);
    int arr2[num2];
    printf("Enter the elements of the second array separated by space : ");
    for(i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int mergedarr[num1 + num2];
    for(i = 0; i < num1; i++)
    {
        mergedarr[i] = arr1[i];
    }
    for(i = 0; i < num2; i++)
    {
        mergedarr[num1 + i] = arr2[i];
    }
    printf("The merged array is : ");
    for(i = 0; i < num1 + num2; i++)
    {
        printf("%d ", mergedarr[i]);
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num1          int    Input number of elements in the first array
      arr1[]        int      Array to store the elements of the first array
       num2         int   Input number of elements in the second array
      arr2[]       int     Array to store the elements of the second array
*/