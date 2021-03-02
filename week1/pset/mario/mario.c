#include <cs50.h>
#include <stdio.h>

int get_height(void);

int main(void)
{
    // Prompt for height
    int height = get_height();

    // Build pyramid
    for (int i = 0; i < height; i++)
    {
        // Spaces
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }
        // Hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // input must be between 1-8
    while (n < 1 || n > 8);
    return n;
}