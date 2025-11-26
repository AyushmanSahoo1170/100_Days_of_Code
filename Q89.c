/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/

#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, count = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("Frequency of '%c': %d", ch, count);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                           PURPOSE
        i            int              Loop counter to traverse the string
      count          int          Counter for frequency of the given character
       ch            char          Character whose frequency is to be counted
      str[]          char               Array to store the input string
*/