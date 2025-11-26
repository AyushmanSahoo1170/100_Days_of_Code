/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/

#include <stdio.h>
#include <string.h>
struct Date 
{
    int day;
    int month;
    int year;
};
struct Employee 
{
    char name[50];
    int id;
    struct Date joining_date;
};
int main() 
{
    struct Employee emp;
    int len;
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    len = strlen(emp.name);
        if(len > 0 && emp.name[len - 1] == '\n')
        {
            emp.name[len - 1] = '\0';
        }
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", emp.name, emp.id, emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
    return 0;
}

/*
Variable Description:
     VARIABLE               TYPE                          PURPOSE
       emp            struct Employee        Variable to hold the employee's data
      name[]                char              Array to store the employee's name
       id                   int              Variable to store the employee's ID
   joining_date         struct Date        Nested structure to hold the joining date
       day                  int              Variable to store the day of joining
      month                 int             Variable to store the month of joining
       year                 int             Variable to store the year of joining
*/