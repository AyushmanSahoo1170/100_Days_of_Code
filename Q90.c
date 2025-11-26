/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
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
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
        {
            str[i] = ch + ('a' - 'A');
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            str[i] = ch - ('a' - 'A');
        }
        else
        {
            str[i] = ch;
        }
        i++;
    }
    printf("Toggled case string: %s", str);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                      PURPOSE
        i            int          Loop counter to traverse the string
      str[]          char           Array to store the input string
*/