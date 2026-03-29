#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[5];
    int sum = 0;

    printf("Enter integers:\n");


    for (int i = 0; i < 5; i++)
    {
       numbers[i] = get_int("Number %i: ", i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    printf("Sum = %d\n", sum);

    return 0;
}
