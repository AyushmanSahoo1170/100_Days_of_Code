/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/

#include <stdio.h>
int main()  
{
    FILE *file;
    char filename[100], ch;
    int vowels = 0, consonants = 0;
    printf("Enter filename : ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if(file == NULL)
    {
        printf("Error: File does not exist!\n");
        return 1;
    }
    while((ch = fgetc(file)) != EOF)
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            char lowerCh;
            if(ch >= 'A' && ch <= 'Z')
            {
                lowerCh = ch + ('a' - 'A');
            }
            else
            {
                lowerCh = ch;
            }
            if(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    fclose(file);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                        PURPOSE
       file          FILE*     Pointer to the file object for file operations
    filename[]       char            Array to store the input filename
       ch            char       Variable to read each character from the file
      vowels         int         Counter for the number of vowels in the file
    consonants       int       Counter for the number of consonants in the file
*/