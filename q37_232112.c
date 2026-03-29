#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter numbers %d: ", i + 1);
    }

    printf("You Entered: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
