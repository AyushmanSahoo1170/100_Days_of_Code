/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
    struct Student student;
    struct Student *studentPtr = &student;
    printf("Enter student details to modify : \n");
    printf("Name : ");
    scanf("%s", studentPtr->name);
    printf("Roll : ");
    scanf("%d", &studentPtr->roll);
    printf("Marks : ");
    scanf("%f", &studentPtr->marks);
    printf("Modified Data : Name: %s | Roll: %d | Marks: %f\n", studentPtr->name, studentPtr->roll, studentPtr->marks);
    return 0;
}

/*
Variable Description:
        VARIABLE              TYPE                           PURPOSE
        student          struct Student         Variable to hold the student's data
       studentPtr        struct Student*         Pointer to the Student structure
          name              char[50]               Array to store student's name
          roll                int              Variable to store student's roll number
         marks               float                Variable to store student's marks
*/