/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf()
and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>
int main()  
{
    FILE *file;
    char name[100];
    int roll, marks, n, i;
    printf("Enter number of students : ");
    scanf("%d", &n);
    file = fopen("students.txt", "w");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    for(i = 0; i < n; i++)
    {
        printf("Enter name of student %d : ", i + 1);
        scanf("%s", name);
        printf("Enter roll number of student %d : ", i + 1);
        scanf("%d", &roll);
        printf("Enter marks of student %d : ", i + 1);
        scanf("%d", &marks);
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }
    fclose(file);
    file = fopen("students.txt", "r");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Student Records:\n");
    while(fscanf(file, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("Name : %s | Roll : %d | Marks : %d\n", name, roll, marks);
    }
    fclose(file);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                             PURPOSE
       file          FILE*          Pointer to the file object for file operations
      name[]         char                Array to store the student's name
       roll          int             Variable to store the student's roll number
      marks          int                Variable to store the student's marks
        n            int               Number of student records to be entered
        i            int          Loop counter for iterating through student records
*/