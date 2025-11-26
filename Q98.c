/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
int main()
{
    char name[100];
    int i = 0, spaceCount = 0;
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    if(name[0] != '\n' && name[0] != '\0')
    {
        printf("%c.", name[0]);
    }
    while(name[i] != '\0' && name[i] != '\n')
    {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n')
        {
            spaceCount++;
            if(spaceCount == 1)
            {
                printf("%c.", name[i + 1]);
            }
            else
            {
                printf(" ");
                int j = i + 1;
                while(name[j] != '\0' && name[j] != '\n')
                {
                    printf("%c", name[j]);
                    j++;
                }
                break;
            }
        }
        i++;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int             Loop counter to traverse the name
    spaceCount       int        Counter for spaces to identify surname position
      name[]         char              Array to store the input name
*/