/*
Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};
int main() 
{
    int i, len;
    struct Student students[5];
    char temp;
    for(i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d : \n", i + 1);
        printf("Name : ");
        if (i > 0)
        {
            getchar();
        }
        fgets(students[i].name, sizeof(students[i].name), stdin);
        len = strlen(students[i].name);
        if(len > 0 && students[i].name[len - 1] == '\n')
        {
            students[i].name[len - 1] = '\0';
        }
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks : ");
        scanf("%d", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    printf("Name\t\tRoll No.\tMarks\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%s\t%d\t\t%d\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}

/*
Variable Description:
     VARIABLE         TYPE                                PURPOSE
     students      struct Student           Array to hold details of 5 students
      name[]          char                  Array to store each student's name
     roll_no          int              Variable to store each student's roll number
      marks           int                 Variable to store each student's marks
     buffer[]         char                  Temporary buffer for reading input
*/