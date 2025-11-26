/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            len = j;
            if(len > maxLen)
            {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
            if(str[i] == '\0' || str[i] == '\n')
            {
                break;
            }
        }
        i++;
    }
    printf("Longest word: %s", longest);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                          PURPOSE
        i            int            Loop counter to traverse the sentence
        j            int            Loop counter to build the current word
       len           int                 Length of the current word
      maxLen         int               Length of the longest word found
      str[]          char              Array to store the input sentence
      word[]         char        Array to store the current word being processed
    longest[]        char           Array to store the longest word found
*/