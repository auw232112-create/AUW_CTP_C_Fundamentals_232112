#include <stdio.h>
#include<cs50.h>
int main (void)
{
    for (int i = 0; i < 3; i++)
    {
        float temp = get_float("Enter the Temperature value: ");
        if (temp < 20)
        {
            printf("Cold\n");
        }
        else if (temp >= 20 && temp <= 30)
        {
            printf("Warm\n");
        }
        else if (temp > 30)
        {
            printf("Hot\n");
        }
    }
    return 0;
}


