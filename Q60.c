/*
Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>
int main()
{
    int num, i, positive = 0, negative = 0, zero = 0;
    printf("Enter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array separated by space : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
        {
            positive++;
        }
        else if(arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d\n", positive, negative, zero);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
     positive        int        Variable to count positive numbers in the array
     negative        int        Variable to count negative numbers in the array
       zero          int            Variable to count zeroes in the array
*/