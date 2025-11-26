/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
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
struct Student findTopStudent(struct Student students[], int n) 
{
    int i, top_index = 0;
    for(i = 1; i < n; i++) 
    {
        if(students[i].marks > students[top_index].marks) 
        {
            top_index = i;
        }
    }
    return students[top_index];
}
int main() 
{
    int n, i, len;
    printf("Enter number of students (max 100): ");
    scanf("%d", &n);
    if (n > 100 || n <= 0) 
    {
        printf("Invalid number of students!\n");
        return 1;
    }
    struct Student students[100];
    char temp;
    for(i = 0; i < n; i++) 
    {
        printf("Enter details for student %d : \n", i + 1);
        printf("Name : ");
        getchar();
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
    struct Student topStudent = findTopStudent(students, n);
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll_no, topStudent.marks);
    return 0;
}

/*
Variable Description:
     VARIABLE         TYPE                              PURPOSE
     students    struct Student             Array to hold details of students
      name[]          char                  Array to store each student's name
     roll_no          int              Variable to store each student's roll number
      marks           int                 Variable to store each student's marks
        n             int                          Number of students
*/