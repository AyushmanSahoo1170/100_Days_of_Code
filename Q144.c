/*
Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>
#include <string.h>
struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};
int main() 
{
    struct Student student;
    int len;
    printf("Enter Name : ");
    fgets(student.name, sizeof(student.name), stdin);
    len = strlen(student.name);
    if (len > 0 && student.name[len - 1] == '\n') 
    {
        student.name[len - 1] = '\0';
    }
    printf("Enter Roll : ");
    scanf("%d", &student.roll_no);
    printf("Enter Marks: ");
    scanf("%d", &student.marks);
    printf("Name : %s | Roll : %d | Marks : %d\n", student.name, student.roll_no, student.marks);
    return 0;
}

/*
Variable Description:
     VARIABLE         TYPE                           PURPOSE
     student     struct Student         Variable to hold the student's data
      name[]          char               Array to store the student's name
     roll_no          int           Variable to store the student's roll number
      marks           int              Variable to store the student's marks
*/