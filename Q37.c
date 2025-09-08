/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>
int main()
{
    int num1, num2, lcm, max;
    printf("Enter two integers : ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    while(1)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is : %d\n", num1, num2, lcm);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                      PURPOSE
       num1          int            First input number to find LCM
       num2          int            Second input number to find LCM
       max           int      Variable to store the maximum of num1 and num2
       lcm           int     Variable to store the least common multiple (LCM)
*/