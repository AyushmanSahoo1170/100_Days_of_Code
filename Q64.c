/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>
int main()
{
    int num, i, digit, maxDigit = 0, maxCount = 0;
    int count[10] = {0};
    printf("Enter an integer number : ");
    scanf("%d", &num);
    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }
    for(i = 0; i < 10; i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
        else
        {
            if(count[i] == maxCount && i < maxDigit)
            {
                maxDigit = i;
            }
        }
    }
    printf("The digit that occurs the most is : %d\n", maxDigit);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
        i            int          Loop counter to iterate through array elements
       num           int              Input number of elements in the array
    count[10]        int           Array to store the count of each digit (0-9)
      digit          int        Variable to store the current digit being processed
    maxDigit         int      Variable to store the digit with the maximum occurrences
    maxCount         int         Variable to store the maximum count of occurrences
*/