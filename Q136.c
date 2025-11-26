/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>
enum Operation {ADD, SUBTRACT, MULTIPLY};
int main() 
{
    enum Operation op;
    char input[10];
    int a, b;
    printf("Enter any two numbers : ");
    scanf("%d %d", &a, &b); 
    printf("Enter an operation to do on the numbers (ADD, SUBTRACT, MULTIPLY) : ");
    scanf("%s", input);
    if(strcmp(input, "ADD") == 0)
    {
        op = ADD;
    }
    else if(strcmp(input, "SUBTRACT") == 0)
    {
        op = SUBTRACT;
    }
    else if(strcmp(input, "MULTIPLY") == 0)
    {
        op = MULTIPLY;
    }
    else
    {
        printf("Invalid input!\n");
        return 1;
    }
    switch(op)
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE             TYPE                             PURPOSE
       op            enum Operation         Variable to store the selected operation
     input[]              char              Array to store user input for operation
       a, b               int             Integers on which the operation is performed
*/