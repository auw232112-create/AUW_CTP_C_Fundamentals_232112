#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float number = get_float ("Enter a float value:");
    printf("The number rounded to two decimals is:%.2f\n",number);
    return 0;

}
