/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
int main()
{
    char str[200], word[50], temp;
    int i = 0, j = 0, start, end;
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
            start = 0;
            end = j - 1;
            while(start < end)
            {
                temp = word[start];
                word[start] = word[end];
                word[end] = temp;
                start++;
                end--;
            }
            printf("%s", word);
            if(str[i] == ' ')
            {
                printf(" ");
            }
            j = 0;
            if(str[i] == '\0' || str[i] == '\n')
            {
                break;
            }
        }
        i++;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                          PURPOSE
        i            int            Loop counter to traverse the sentence
        j            int            Loop counter to build the current word
      start          int         Starting index for reversing the current word
       end           int          Ending index for reversing the current word
      str[]          char              Array to store the input sentence
      word[]         char        Array to store the current word being processed
      temp           char          Temporary variable for swapping characters
*/