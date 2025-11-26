/*
Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same
*/

#include <stdio.h>
#include <string.h>
struct Student 
{
    char name[50];
    int id;
    float marks;
};
int main() 
{
    struct Student student1, student2;
    int len1, len2;
    printf("Enter details for Student 1 : \n");
    printf("Name : ");
    fgets(student1.name, sizeof(student1.name), stdin);
    len1 = strlen(student1.name);
    if(len1 > 0 && student1.name[len1 - 1] == '\n')
    {
        student1.name[len1 - 1] = '\0';
    }
    printf("ID : ");
    scanf("%d", &student1.id);
    printf("Marks : ");
    scanf("%f", &student1.marks);
    getchar();
    printf("Enter details for Student 2 : \n");
    printf("Name : ");
    fgets(student2.name, sizeof(student2.name), stdin);
    len2 = strlen(student2.name);
    if(len2 > 0 && student2.name[len2 - 1] == '\n')
    {
        student2.name[len2 - 1] = '\0';
    }
    printf("ID : ");
    scanf("%d", &student2.id);
    printf("Marks : ");
    scanf("%f", &student2.marks);
    if (strcmp(student1.name, student2.name) == 0 && student1.id == student2.id && student1.marks == student2.marks) 
    {
        printf("They are identical (Same)\n");
    } 
    else 
    {
        printf("They are not identical (Not Same)\n");
    }
    return 0;
}

/*
Variable Description:
     VARIABLE              TYPE                            PURPOSE
     student1         struct Student        Variable to hold the first student's data
     student2         struct Student        Variable to hold the second student's data
      name[]               char                 Array to store the student's name
       id                  int                  Variable to store the student's ID
      marks                float               Variable to store the student's marks
*/