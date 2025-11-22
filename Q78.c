/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/

#include <stdio.h>
int main()
{
    int i, j, rows, cols, sum = 0;
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
            sum = sum + matrix[i][i];
        }
        printf("The sum of the main diagonal elements is: %d", sum);
    }
    else
    {
        printf("The matrix should be a square matrix to calculate the sum of main diagonal elements.");
        return 1;
    }
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                         PURPOSE
        i            int        Loop counter to iterate through array elements
       num           int            Input number of elements in the array
      arr[]          int              Array to store the input elements
     positive        int        Variable to count positive numbers in the array
     negative        int        Variable to count negative numbers in the array
       zero          int            Variable to count zeroes in the array
*/