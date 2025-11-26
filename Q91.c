/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/

#include <stdio.h>
int main()
{
    char str[100], result[100], ch;
    int i = 0, j = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        ch = str[i];
        if(!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
             ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            result[j] = ch;
            j++;
        }
        i++;
    }
    result[j] = '\0';
    printf("String after removing vowels: %s", result);
    return 0;
}