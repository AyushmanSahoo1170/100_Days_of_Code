/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>
int main()
{
    char str[100], revStr[100];
    int i = 0, j = 0;
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
    printf("The reversed string is : %s", revStr);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to find the length of the string
        j            int             Loop counter to reverse the string
      str[]          char             Array to store the input string
     revStr[]        char            Array to store the reversed string
*/