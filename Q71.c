/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/

#include <stdio.h>
int main()
{
    int i, j, rows, cols;
    printf("Enter the number of rows of the matrix : ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix : ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix separated by space : \n");
    for(i = 0; i < rows; i++)
    { 
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }     
        printf("\n");   
    }
    return 0;
}// Problem

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
        j            int        Loop counter to iterate through array elements
       rows          int            Input number of rows in the matrix
       cols          int           Input number of columns in the matrix
    matrix[][]       int        2D Array to store the elements of the matrix
*/