#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5];
    int positive_count = 0;
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter integer %i of 5: ", i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > 0)
        {
            positive_count++;
        }
    }

    printf("Positive Numbers Count = %i\n", positive_count);

    return 0;
}
