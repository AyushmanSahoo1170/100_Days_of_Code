/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, freq[26] = {0};
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        ch = str[i];
        if(ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2)
            {
                printf("First repeating lowercase alphabet: %c", ch);
                return 0;
            }
        }
        i++;
    }
    printf("No repeating lowercase alphabet found");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
        i            int              Loop counter to traverse the string
      freq[]        int          Array to store frequency of each lowercase alphabet
       ch            char        Current character being processed from the string
      str[]          char               Array to store the input string
*/