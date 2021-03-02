#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask user for name input
    string answer = get_string("What's your name? ");
    // return input
    printf("hello, %s\n", answer);
}