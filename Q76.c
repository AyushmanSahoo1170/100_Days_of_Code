/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>
int main()
{
    int i, j, rows, cols;
    printf("Enter the number of rows of the matrix : ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix : ");
    scanf("%d", &cols);
    if(rows == cols)
    {
    int matrix[rows][cols];
    printf("Enter the elements of the matrix separated by space : \n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                printf("It is not a symmetric matrix.\n");
                return 1;
            }
        }
    }
    printf("It is a symmetric matrix.\n");
    }
    else
    {
        printf("The matrix should be a square matrix to be symmetric.");
        return 1;
    }
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
*/