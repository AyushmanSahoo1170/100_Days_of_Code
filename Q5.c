/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>
int main()
{
    int celsius, fahrenheit;
    printf("Enter temperature in Celsius:\n");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Fahrenheit = %d", fahrenheit);
    return 0;
}

/*
Variable Description:
          VARIABLE           TYPE                             PURPOSE
          celsius            float                   Input radius of the Circle
         fahrenheit      float         Calculate Area and Circumference of the Circle
*/