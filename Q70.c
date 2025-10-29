/*
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/

#include <stdio.h>
int main()
{
    int i, num, k;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate the array to the right : ");
    scanf("%d", &k);
    k = k % num;
    int rotatedarr[num];
    for(i = 0; i < num; i++)
    {
        rotatedarr[(i + k) % num] = arr[i];
    }
    printf("The array after rotation is : ");
    for(i = 0; i < num; i++)
    {
        printf("%d ", rotatedarr[i]);
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
        k            int      Number of positions to rotate the array to the right
   rotatedarr[]      int          Array to store the elements after rotation
*/