#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = get_int("z:");
    if (x >=y && x>=z)
    {
        printf("%i is the largest number\n", x);
    }
    else if (y >=x && y>=z)
    {
        printf("%i is the largest number\n", y);
    }
    else
    {
        printf("%i is the largest number\n",z);
    }

return 0;
}
