#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters();
int count_words();
int count_sentences();

int main(void)
{
    // prompt user for input text
    string str = get_string("Text: ");

    // call functions to get values
    int letters = count_letters(str);
    int words = count_words(str);
    int sentences = count_sentences(str);

    // FIXME: average number of letters/sentences per 100 words
    float L = (float) letters / (words / 100);
    float S = (float) sentences / (words / 100);

    // Coleman-Liau index
    int index = 0.0588 * L - 0.296 * S - 15.8;

    printf("%i letter(s)\n", letters);
    printf("%i word(s)\n", words);
    printf("%i sentence(s)\n", sentences);
    printf("Grade %i\n", index);
}

int count_letters(string str)
{
    int sum = 0;
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        // Restrict to only count uppercase/lowercase letters
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            sum ++;
        }
    }
    return sum;
}

int count_words(string str)
{
    // start sum at 1 to include last word, not followed by a space
    int sum = 1;
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        // Restrict to only count words, seperated by a space
        if (str[i] == 32)
        {
            sum ++;
        }
    }
    return sum;
}

int count_sentences(string str)
{
    int sum = 0;
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        // Restrict to only count sentences, look for ending punctuation, refer to ASCII Table
        if ((str[i] == 33) || (str[i] == 46) || (str[i] == 63))
        {
            sum ++;
        }
    }
    return sum;
}