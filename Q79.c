/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>
int main()
{
    int i, j, rows, cols, r, c, d;
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
    printf("The diagonal traversal of the matrix is: \n");
    for(d = 0; d < rows + cols - 1; d++)
    {
        if(d % 2 == 0)
        {
            if (d < rows)
            {
                r = d;
            }
            else
            {
                r = rows - 1;
            }
            c = d - r;
            while(r >= 0 && c < cols)
            {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        }
        else
        {
            if (d < cols)
            {
                c = d;
            }
            else
            {
                c = cols - 1;
            }
            r = d - c;
            while(c >= 0 && r < rows)
            {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
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