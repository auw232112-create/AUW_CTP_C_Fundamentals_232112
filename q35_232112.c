#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int year = get_int("Enter the year:");
    if (year<=0)
    {
        printf( "Invalid year\n");
    }
    else
    {
        if (year%400==0)

        {
            printf("Leap Year\n");
        }
        else if (year % 100 == 0)
        {
            printf("Not Leap Year\n");
        }
        else if (year % 4 == 0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not leap Year\n");
        }
    }
    return 0;
}
