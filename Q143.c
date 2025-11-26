/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
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
    int n, i, top_index = 0, len;
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
    for(i = 1; i < n; i++) 
    {
        if(students[i].marks > students[top_index].marks) 
        {
            top_index = i;
        }
    }
    printf("\nTopper: %s (Marks: %d)\n", students[top_index].name, students[top_index].marks);
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
    top_index         int              Index of the student with the highest marks
       len            int                 Length of the student's name string
      temp            char               Temporary variable for input handling
*/