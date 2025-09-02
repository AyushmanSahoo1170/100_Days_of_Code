/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
int main ()
{
    float radius, area, circumference, PI = 3.14159;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2* PI * radius;
    printf("Area = %f, Circumference = %f", area, circumference);
    return 0; 
}

/*
Variable Description:
          VARIABLE           TYPE                             PURPOSE
           radius            float                   Input radius of the Circle
    area, circumference      float         Calculate Area and Circumference of the Circle
             PI              float                       Constant value of PI

*/ 
