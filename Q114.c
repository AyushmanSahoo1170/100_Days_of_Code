/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating
characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/

#include <stdio.h>
int main()
{
    char s[100];
    int i, j, maxLength = 0, currentLength, k , found;
    printf("Enter a string : ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        currentLength = 0;
        for(j = i; s[j] != '\0'; j++)
        {
            found = 0;
            for(k = i; k < j; k++)
            {
                if(s[j] == s[k])
                {
                    found = 1;
                    break;
                }
            }
            if(found)
            {
                break;
            }
            currentLength++;
        }
        if(currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }
    printf("Length of the longest substring without repeating characters : %d\n", maxLength);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
       s[]           char             Array to store the input string
        i            int                Loop counter for outer loop
        j            int                Loop counter for inner loop.
    maxLength        int         Length of the longest substring found so far
  currentLength      int        Length of the current substring being evaluated
        k            int        Loop counter to check for repeating characters
      found          int       Flag to indicate if a repeating character is found
*/