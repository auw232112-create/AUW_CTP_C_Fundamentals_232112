#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float values[5] = {2.5, 3.1, 4.8, 1.2, 9.6};
    printf("float values: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", values[i]);  
    }
    printf("\n");

    return 0;
}
