#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[5];
    int largest;
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number %i: ", i + 1);
    }

    largest = numbers[0];
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    printf("Largest = %i\n", largest);

    return 0;
}
