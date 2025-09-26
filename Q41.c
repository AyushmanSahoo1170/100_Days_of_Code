/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>
#include <math.h>
int main()
{
  int num, original, first_digit, last_digit, digits, place;
  printf("Enter a Number : ");
  scanf("%d", &num);
  original = num;
  last_digit = num % 10;
  digits = (int)log10(num);
  place = (int)pow(10, digits);
  first_digit = num / place;
  if(digits == 0)
  {
    printf("The number has only one digit, so swapping is not applicable.\n");
  }
  else
  {
    num = num - (first_digit * place) - last_digit;
    num = num + (last_digit * place) + first_digit;
    printf("The number after swapping the first and last digit of %d is %d\n", original, num);
  }
  return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                                            PURPOSE
       num           int                     Input number whose first and last digits are to be swapped
     original        int                       Variable to store the original input number for output
    first_digit      int                          Variable to store the first digit of the number
    last_digit       int                          Variable to store the last digit of the number
      digits         int                 Variable to store the total number of digits in the number minus one
      place          int            Variable to store the place value of the first digit (10^(number of digits - 1))   
*/