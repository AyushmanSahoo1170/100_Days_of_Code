/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

#include <stdio.h>
int main()
{
    int num1, num2, choice, sum, difference, product, quotient, modulus;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Please choose an operation to perform : \n"
           "Enter 1 for Addition\n"
           "Enter 2 for Substraction\n"
           "Enter 3 for Multiplication\n"
           "Enter 4 for Division\n"
           "Enter 5 for Remainder\n"
           "Enter your Choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            sum = num1 + num2;
            printf("Addition of %d and %d is %d\n", num1, num2, sum);
            break;
        case 2:
            difference = num1 - num2;
            printf("Difference of %d and %d is %d\n", num1, num2, difference);
            break;
        case 3:
            product = num1 * num2;
            printf("Product of %d and %d is %d\n", num1, num2, product);
            break;
        case 4:
            quotient = num1 / num2;
            printf("Quotient of %d and %d is %d\n", num1, num2, quotient);
            break;
        case 5:
            modulus = num1 % num2;
            printf("Remainder of %d and %d is %d\n", num1, num2, modulus);
            break;
        default:
            printf("Invalid Choice\n");
            break;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                     PURPOSE
       num1          int        Input first number for the calculation
       num2          int        Input second number for the calculation
      choice         int         Input choice of operation to perform
       sum           int        Variable to store the result of addition
    difference       int       Variable to store the result of subtraction
     product         int      Variable to store the result of multiplication
     quotient        int         Variable to store the result of division
     modulus         int     Variable to store the result of modulus operation
*/