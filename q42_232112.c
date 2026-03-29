#include <stdio.h>
#include <cs50.h>

int main(void) {

    string word_input = get_string("Enter a word: ");
    char word[20];
    for (int i = 0; i < 20 && word_input[i] != '\0'; i++)
    {
        word[i] = word_input[i];
    }
    printf("Word = %s\n", word);

    return 0;
}
