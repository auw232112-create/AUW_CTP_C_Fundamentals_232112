#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    if (x > y)
    {
        printf("%i is the largest number\n", x);
    }
    else if (y > x)
    {
        printf("%i is the largest number\n", y);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

return 0;
}
