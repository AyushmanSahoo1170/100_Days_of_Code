/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum Gender
{
    MALE, FEMALE, OTHER
};
struct Person
{
    char name[50];
    enum Gender gender;
    int age;
};
int main() 
{
    struct Person person;
    char genderInput[10];
    printf("Enter gender (MALE/FEMALE/OTHER): ");
    scanf("%s", genderInput);
    if (strcmp(genderInput, "MALE") == 0) 
    {
        person.gender = MALE;
    } 
    else if (strcmp(genderInput, "FEMALE") == 0) 
    {
        person.gender = FEMALE;
    } 
    else if (strcmp(genderInput, "OTHER") == 0) 
    {
        person.gender = OTHER;
    } 
    else 
    {
        printf("Invalid gender input\n");
        return 1;       
    }
    switch (person.gender) 
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE          TYPE                        PURPOSE
     person        struct Person       Variable to hold the person's data
  genderInput[]        char           Array to store user input for gender
*/