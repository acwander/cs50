#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    // printf("%i %i %i\n", c1, c2, c3); // 72 73 33

    string s = "HI!";
    // printf("%s\n", s); // HI!
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // 72 73 33 0
}