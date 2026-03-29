#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int mark;
    mark = get_int("Enter your mark (0-100): ");

    if (mark >= 80 && mark <= 100)
    {
        printf("Grade A\n");
    }
    else if (mark >= 70 && mark <= 79)
    {
        printf("Grade B\n");
    }
    else if (mark >= 60 && mark <= 69)
    {
        printf("Grade C\n");
    }
    else if (mark >= 50 && mark <= 59)
    {
        printf("Grade D\n");
    }
    else if (mark >= 0 && mark <= 49)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid Mark\n");
    }

    return 0;
}


