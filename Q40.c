/*
Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>
int main()
{
    int num, original, digit, complement = 0, place = 1;
    printf("Enter a Binary Number : ");
    scanf("%d", &num);
    original = num;
    while(num > 0)
    {
        digit = num % 10;
        if(digit == 0)
        {
            complement = complement + (1 * place);
        }
        else
        {
            complement = complement + (0 * place);
        }
        place = place * 10;
        num = num / 10;
    }
        printf("The 1's complement of %d is %d\n", original, complement);
        return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                            PURPOSE
       num           int                     Input binary number whose 1's complement is to be found
     original        int                      Variable to store the original input number for output
      digit          int                             Variable to store the last digit of num
    complement       int                   Variable to accumulate the 1's complement of the binary number
      place          int         Variable to track the place value (1, 10, 100, etc.) for constructing the complement
*/