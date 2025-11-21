/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>
int main()
{
    int i, j, rows, cols, isDistinct = 0;
    printf("Enter the number of rows of the matrix : ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix : ");
    scanf("%d", &cols);
    if(rows == cols)
    {
        int matrix[rows][cols], diagElements[rows];
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
            diagElements[i] = matrix[i][i];
        }
        for(i = 0; i < rows; i++)
        {
            for(j = i + 1; j < rows; j++)
            {
                if(diagElements[i] == diagElements[j])
                {
                    isDistinct++;
                }
            }
        }
        if(isDistinct > 0)
        {
            printf("The diagonal elements are not distinct.");
        }
        else
        {
            printf("The diagonal elements are distinct.");
        }
    }
    else
    {
        printf("The matrix should be a square matrix to check diagonal elements.");
        return 1;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int                   Loop counter for rows
        j            int                  Loop counter for columns
       rows          int                Number of rows in the matrix
       cols          int               Number of columns in the matrix
    matrix[][]       int              2D array to store matrix elements
  diagElements[]     int              Array to store diagonal elements
    isDistinct       int        Flag to check if diagonal elements are distinct  
*/