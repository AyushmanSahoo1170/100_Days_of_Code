/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to
the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>
int main()  
{
    FILE *sourceFile, *destFile;
    char ch, sourceFileName[100], destFileName[100];
    printf("Enter source file name : ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name : ");
    scanf("%s", destFileName);
    sourceFile = fopen(sourceFileName, "r");
    if(sourceFile == NULL)
    {
        printf("Error opening source file!\n");
        return 1;
    }
    destFile = fopen(destFileName, "w");
    if(destFile == NULL)
    {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }
    while((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully to %s\n", destFileName);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                               PURPOSE
    sourceFile       FILE*             Pointer to the source file object for reading
     destFile        FILE*           Pointer to the destination file object for writing
       ch            char        Variable to store each character read from the source file
 sourceFileName[]    char              Array to store the name of the source file
  destFileName[]     char            Array to store the name of the destination file
*/