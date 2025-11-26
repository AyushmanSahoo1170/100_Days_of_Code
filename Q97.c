/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>
int main()
{
    char name[100];
    int i = 0;
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
            printf("%c.", name[i + 1]);
        }
        i++;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                        PURPOSE
        i            int             Loop counter to traverse the name
      name[]         char              Array to store the input name
*/