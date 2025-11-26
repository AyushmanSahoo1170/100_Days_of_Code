/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/

#include <stdio.h>
int main()
{
    char str[100];
    int i, j, len = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    printf("All substrings:\n");
    for(i = 0; i < len; i++)
    {
        for(j = i; j < len; j++)
        {
            for(int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                   PURPOSE
        i            int        Starting index of the substring
        j            int         Ending index of the substring
       len           int          Length of the input string
      str[]          char       Array to store the input string
*/