/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/

#include <stdio.h>
int main()
{
    int i, j, k, rows1, cols1, rows2, cols2;
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &cols1);
    int matrix1[rows1][cols1];
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &cols2);
    if(cols1 != rows2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    int matrix2[rows2][cols2];
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int result[rows1][cols2];
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for(k = 0; k < cols1; k++)
            {
                result[i][j] = result[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
    printf("The resulting matrix after multiplication is:\n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
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
        k            int               Loop counter for multiplication
      rows1          int             Number of rows in the first matrix
      cols1          int            Number of columns in the first matrix
      rows2          int             Number of rows in the second matrix
      cols2          int            Number of columns in the second matrix
   matrix1[][]       int                    First input matrix
   matrix2[][]       int                   Second input matrix
   result[][]        int           Resultant matrix after multiplication
*/