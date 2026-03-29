#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int age = get_int("Age: ");
    int citizenship = get_int("Citizen (1=Yes, 0=No): ");

    if (age >= 18)
    {
        if (citizenship == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not Eligible (Not Citizen)\n");
        }
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }
    return 0;
}
