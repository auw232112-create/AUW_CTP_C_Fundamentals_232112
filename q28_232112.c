#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num= get_int("Number: ");
    if (num>= 1 && num <= 100)
    {
        printf("This number is within range [1-100]\n");
    }
    else
    {
        printf("This number is outside range [1-100]\n");
    }
    return 0;
}
