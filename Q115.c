/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if 
s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are,
otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
*/

#include <stdio.h>
int main()
{
    char s[100], t[100];
    int countS[26] = {0}, countT[26] = {0}, i;
    printf("Enter first string : ");
    scanf("%s", s);
    printf("Enter second string : ");
    scanf("%s", t);
    for(i = 0; s[i] != '\0'; i++)
    {
        countS[s[i] - 'a']++;
    }
    for(i = 0; t[i] != '\0'; i++)
    {
        countT[t[i] - 'a']++;
    }
    for(i = 0; i < 26; i++)
    {
        if(countS[i] != countT[i])
        {
            printf("Not Anagram\n");
            return 1;
        }
    }
    printf("Anagram\n");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                              PURPOSE
       s[]           char                Array to store the first input string
       t[]           char                Array to store the second input string
    countS[]         int         Array to store frequency of each character in string s
    countT[]         int         Array to store frequency of each character in string t
        i            int             Loop counter for iterating through characters
*/