/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without
overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>
int main()  
{
    FILE *file;
    char line[200];
    file = fopen("destination.txt", "a");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to append to the file: ");
    fgets(line, sizeof(line), stdin);
    fputs(line, file);
    fclose(file);
    printf("File updated successfully with appended text.\n");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
       file          FILE*        Pointer to the file object for file operations
      line[]         char           Array to store the line of text to append
*/