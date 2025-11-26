/*
Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average,
and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/

#include <stdio.h>
int main()
{
    FILE *file;
    int number, sum = 0, count = 0;
    float average;
    file = fopen("numbers.txt", "r");
    if(file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    while(fscanf(file, "%d", &number) != EOF)
    {
        sum = sum + number;
        count++;
    }
    fclose(file);
    if(count == 0)
    {
        printf("No numbers found in the file.\n");
        return 1;
    }
    average = (float)sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", average);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                            PURPOSE
       file          FILE*         Pointer to the file object for file operations
      number         int          Variable to store each integer read from the file
       sum           int             Variable to accumulate the sum of integers
      count          int            Variable to count the number of integers read
     average        float              Variable to store the computed average
*/