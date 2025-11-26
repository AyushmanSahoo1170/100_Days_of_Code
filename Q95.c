/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i = 0, j = 0, len1 = 0, len2 = 0, found = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while(str1[len1] != '\0' && str1[len1] != '\n')
    {
        len1++;
    }
    while(str2[len2] != '\0' && str2[len2] != '\n')
    {
        len2++;
    }
    if(len1 != len2)
    {
        printf("Not rotation");
        return 1;
    }
    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len1; j++)
        {
            if(str1[(i + j) % len1] != str2[j])
            {
                break;
            }
        }
        if(j == len1)
        {
            printf("This string is a rotation of the other");
            return 1;
        }
    }
    printf("This string is not a rotation of the other");
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
        i            int             Loop counter for rotation starting point
        j            int              Loop counter for character comparison
       len1          int                   Length of the first string
       len2          int                   Length of the second string
      str1[]         char             Array to store the first input string
      str2[]         char             Array to store the second input string
*/