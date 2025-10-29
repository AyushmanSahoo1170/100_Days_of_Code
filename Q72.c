/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/

#include <stdio.h>
int main()
{
    int i, j, rows, cols, sum = 0;
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
            sum = sum + matrix[i][j];
        }
    }
    printf("The sum of all elements in the matrix is : %d\n", sum);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
        j            int        Loop counter to iterate through array elements
       rows          int            Input number of rows in the matrix
       cols          int           Input number of columns in the matrix
    matrix[][]       int        2D Array to store the elements of the matrix
       sum           int    Variable to store the sum of all elements in the matrix
*/