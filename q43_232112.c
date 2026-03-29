#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[3];
    for (int i = 0; i < 3; i++)
    {
        names[i] = get_string("Enter name %d: ", i + 1);
    }


    printf("Names:\n");
    for (int i = 0; i < 3; i++)
     {
        printf("%s\n", names[i]);
    }

    return 0;
}
