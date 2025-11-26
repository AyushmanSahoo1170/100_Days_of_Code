/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/

#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, spaces = 0, digits = 0, special = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        ch = str[i];
        if(((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) == 0)
        {
            if(ch == ' ')
            {
                spaces++;
            }
            else if(ch >= '0' && ch <= '9')
            {
                digits++;
            }
            else
            {
                if (ch != '\n')
                {
                    special++;
                }
            }
        }
        i++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                               PURPOSE
        i            int                   Loop counter to traverse the string
      spaces         int               Counter for number of spaces in the string
      digits         int               Counter for number of digits in the string
     special         int         Counter for number of special characters in the string
      str[]          char                   Array to store the input string
*/