/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of
non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>
int main()  
{
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0, inWord = 0;
    file = fopen("info.txt", "r");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    while((ch = fgetc(file)) != EOF)
    {
        charCount++;
        if(ch == '\n')
        {
            lineCount++;
            inWord = 0;
        }
        else if(ch == ' ' || ch == '\t')
        {
            inWord = 0;
        }
        else 
        {
            if(inWord == 0)
            {
                inWord = 1;
                wordCount++;
            }
        }
    }
    if(charCount > 0 && ch != '\n')
    {
        lineCount++;
    }
    fclose(file);
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);
    return 0;
}

/* 
Variable Description:
     VARIABLE        TYPE                             PURPOSE
       file          FILE*          Pointer to the file object for file operations
        ch           char         Variable to store each character read from the file
     charCount       int                Counter for total number of characters
     wordCount       int                  Counter for total number of words
     lineCount       int                  Counter for total number of lines
     inWord          int              Flag to indicate if currently inside a word
*/