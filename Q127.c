/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to
output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>
int main()  
{
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("info.txt", "r");
    if(inputFile == NULL)
    {
        printf("Error opening input file!\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if(outputFile == NULL)
    {
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;
    }
    while((ch = fgetc(inputFile)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - ('a' - 'A');
        }
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("Text converted from info.txt to uppercase and written to output.txt successfully!\n");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                PURPOSE
     inputFile       FILE*             Pointer to the input file object for reading
    outputFile       FILE*             Pointer to the output file object for writing
        ch           char         Variable to store each character read from the input file
*/