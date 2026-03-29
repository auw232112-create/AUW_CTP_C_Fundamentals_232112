#include <cs50.h>
#include <stdio.h>
int add(int a, int b);

int main(void)
{
    int x = get_int("Enter an integer: ");
    int y = get_int("Enter another integer: ");
    int result = add(x, y);

    printf("The sum of %i and %i is %i!\n", x, y, result);
}
int add (int a, int b)
{
    return a + b;
    return 0;
}

