/*
Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/

#include <stdio.h>
enum Status {SUCCESS, FAILURE, TIMEOUT};
int main()  
{
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    return 0;
}

/*
Variable Description:
            VARIABLE               TYPE                           PURPOSE
   SUCCESS, FAILURE, TIMEOUT    enum Status      Enum constants representing different statuses
*/