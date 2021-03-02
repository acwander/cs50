#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    // iterate over char in string
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // // if lowercase
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     // convert to uppercase using ASCII, always 32 apart
        //     printf("%c", s[i] - 32);
        // }
        // // else uppercase
        // else
        // {
        //     printf("%c", s[i]);
        // }

        // same as above using ctype.h
        // if (islower(s[i]))
        // {
        //     printf("%c", toupper(s[i]));
        // }

        // even better using ctype.h
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}