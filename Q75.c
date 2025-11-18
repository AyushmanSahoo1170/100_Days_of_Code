/*
Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/

#include <stdio.h>
int main()
{
    int i, j, rows1, cols1, rows2, cols2;
    printf("Enter the number of rows of the first matrix : ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of the first matrix : ");
    scanf("%d", &cols1);
    int matrix1[rows1][cols1];
    printf("Enter the elements of the first matrix separated by space : \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the number of rows of the second matrix : ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of the second matrix : ");
    scanf("%d", &cols2);
    if(rows1 != rows2 || cols1 != cols2)
    {
        printf("Matrix addition is not possible with the given dimensions. \n");
        return 1;
    }
    int matrix2[rows2][cols2];
    printf("Enter the elements of the second matrix separated by space : \n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int sumMatrix[rows1][cols1];
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The sum of the two matrices is : \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }     
        printf("\n");   
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
        j            int        Loop counter to iterate through array elements
       rows1         int            Input number of rows in the first matrix
       cols1         int           Input number of columns in the first matrix
    matrix1[][]      int        2D Array to store the elements of the first matrix
       rows2         int            Input number of rows in the second matrix
       cols2         int           Input number of columns in the second matrix
    matrix2[][]      int        2D Array to store the elements of the second matrix
   sumMatrix[][]     int           2D Array to store the sum of the two matrices
*/