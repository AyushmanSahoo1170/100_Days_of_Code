/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>
int main()
{
    char str[100], revStr[100];
    int i = 0, j = 0, k = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        i++;
    }
    if(i > 0 && str[i - 1] == '\n')
    {
        i--;
    }
    for(j = 0; j < i; j++)
    {
        revStr[j] = str[i - j - 1];
    }
    revStr[j] = '\0';
    for(k = 0; str[k] != '\0' && revStr[k] != '\0'; k++)
    {
        if(str[k] != revStr[k])
        {
            printf("It is not Palindrome");
            return 1;
        }
    }
    printf("It is Palindrome");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to find the length of the string
        j            int             Loop counter to reverse the string
        k            int    Loop counter to compare original and reversed strings
      str[]          char             Array to store the input string
     revStr[]        char            Array to store the reversed string
*/