/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main()
{
    int num, i, factor = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            factor++;
        }
    }    
    if(factor == 2)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                          PURPOSE
       num           int           Input number to be checked for prime number
        i            int             Loop counter for checking divisibility
      factor         int          Counter to count the number of divisors of n
*/