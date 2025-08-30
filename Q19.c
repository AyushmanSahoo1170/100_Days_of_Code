/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle : ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if(side1 == side2 && side2 == side3)
    {
        printf("It's an Equilateral Triangle\n");
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("It's an Isosceles Triangle\n");
    }
    else
    {
        printf("It's a Scalene Triangle\n");
    }
    return 0;
}

/*
       VARIABLE        TYPE                        PURPOSE
        side1          int         Length of the first side of the triangle
        side2          int         Length of the second side of the triangle
        side3          int         Length of the third side of the triangle
*/