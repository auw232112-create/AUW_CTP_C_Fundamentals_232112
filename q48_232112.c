#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Number: ");


    if (num %2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    return 0;
}

