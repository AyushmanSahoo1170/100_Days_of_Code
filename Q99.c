/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>
int main()
{
    char date[11], day[3], month[4], year[5];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';
    month[0] = 'A';
    month[1] = 'p';
    month[2] = 'r';
    month[3] = '\0';
    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';
    printf("Date in dd-Apr-yyyy format: %s-%s-%s", day, month, year);
    return 0;
}

/*
Variable Description:
     VARIABLE        TYPE                              PURPOSE
      date[]         char          Array to store the input date in dd/04/yyyy format
      day[]          char                Array to store the day part of the date
     month[]         char      Array to store the month part of the date in abbreviated form
      year[]         char                Array to store the year part of the date
*/