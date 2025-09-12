/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>
int main()
{
    int num, original, digit, product = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    original = num;
    while(num > 0)
    {
        digit = num % 10;
        if(digit % 2 != 0)
        {
            product = product * digit;
        }
        else
        {
            product = product * 1;
        }
        num = num / 10;
    }
    printf("The product of odd digits of %d is %d\n", original, product);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                            PURPOSE
       num           int        Input number whose odd digits are to be multiplied
     original        int      Variable to store the original input number for output
      digit          int            Variable to store the last digit of num
     product         int       Variable to accumulate the product of the odd digits
*/