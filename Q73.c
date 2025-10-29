/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
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
    int rowSum[rows];
    printf("Enter the elements of the matrix separated by space : \n");
    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }
    printf("The sum of each row of the matrix is : \n");
    for(i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
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
     rowSum[]        int       Array to store the sum of each row of the matrix
*/