/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>
int main()
{
    int num, binary = 0, remainder, base = 1;
    printf("Enter an integer : ");
    scanf("%d", &num);
    while(num != 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Binary Representation = %d\n", binary);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                   PURPOSE
       num           int                    Input number to be converted to binary
      binary         int              Variable to store the binary representation of the number
     remainder       int                Variable to store the remainder when n is divided by 2
       base          int        Variable to represent the current base (1, 10, 100, ...) for binary placement
*/