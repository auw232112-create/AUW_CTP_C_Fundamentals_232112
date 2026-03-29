#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("Age: ");
    if (age < 0)
    {
        printf("Invalid Age\n");
    }
    else if (age >=0 && age <= 12)
    {
        printf("Child\n");
    }
    else if (age >=13 && age <= 19)
    {
        printf("Teen\n");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Senior\n");
    }

    return 0;
}
