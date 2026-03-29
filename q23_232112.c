#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("Enter n: ");
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
