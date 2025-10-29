/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/

#include <stdio.h>
int main()
{
    int num, i, j, factorial;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Prime numbers from 1 to %d are : ", num);
    for(i = 2; i <= num; i++)
    {
        factorial = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                factorial++;
            }
        }
        if(factorial == 2)
        { 
            printf("%d ", i);
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int       Loop counter to go through numbers from 2 to n
        j            int          Loop counter to check divisibility of i
     factorial       int        Counter to count the number of divisors of i
       num           int      Input number up to which primes are to be printed
*/