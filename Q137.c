/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>
enum UserRole {ADMIN, USER, GUEST};
int main() 
{
    enum UserRole role;
    char input[10];
    printf("Enter user role (ADMIN, USER, GUEST): ");
    scanf("%s", input);
    if(strcmp(input, "ADMIN") == 0)
    {
        role = ADMIN;
    }
    else if(strcmp(input, "USER") == 0)
    {
        role = USER;
    }
    else if(strcmp(input, "GUEST") == 0)
    {
        role = GUEST;
    }
    else
    {
        printf("Invalid input!\n");
        return 1;
    }
    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE             TYPE                           PURPOSE
       role           enum UserRole          Variable to store the user role
     input[]              char              Array to store user input for role
*/