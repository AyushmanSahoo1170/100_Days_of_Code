/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>
#include <string.h>
struct Employee 
{
    char name[50];
    int id;
    float salary;
};
int main() 
{
    struct Employee emp, emp_read;
    int len;
    FILE *file;
    file = fopen("employee.dat", "wb");
    if (file == NULL) 
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    len = strlen(emp.name);
    if(len > 0 && emp.name[len - 1] == '\n')
    {
        emp.name[len - 1] = '\0';
    }
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    file = fopen("employee.dat", "rb");
    if (file == NULL) 
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&emp_read, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("\nEmployee Details Read from File:\n");
    printf("Name: %s\n", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);
    return 0;
}

/*
Variable Description:
     VARIABLE              TYPE                                 PURPOSE
       emp            struct Employee        Variable to hold the employee's data for writing
     emp_read         struct Employee        Variable to hold the employee's data for reading
      name[]               char                    Array to store the employee's name
       id                  int                     Variable to store the employee's ID
     salary                float                 Variable to store the employee's salary
      file                 FILE*                    File pointer for file operations
*/