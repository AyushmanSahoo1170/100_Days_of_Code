/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
*/

#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if(str[i] != '\n')
        {
            printf("%c\n", str[i]);
        }
        i++;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through string characters
      str[]          char               Array to store the input string
*/