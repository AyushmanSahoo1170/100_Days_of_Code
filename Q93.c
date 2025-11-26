/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/

#include <stdio.h>
int main()
{
    char str1[100], str2[100], ch;
    int freq[26] = {0}, i = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while(str1[i] != '\0' && str1[i] != '\n')
    {
        ch = str1[i];
        if(ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
        i++;
    }
    i = 0;
    while(str2[i] != '\0' && str2[i] != '\n')
    {
        ch = str2[i];
        if(ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']--;
        }
        i++;
    }
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("The strings are not anagrams");
            return 1;
        }
    }
    printf("The strings are anagrams");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                            PURPOSE
        i            int               Loop counter to traverse the strings
      freq[]         int         Array to store frequency of each lowercase alphabet
       ch            char        Current character being processed from the strings
      str1[]         char              Array to store the first input string
      str2[]         char             Array to store the second input string
*/