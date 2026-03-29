#include <cs50.h>
#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int x = get_int("First number: ");
    int y = get_int("Second number: ");

    int m = max(x, y);

    printf("Maximum: %d\n", m);
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
