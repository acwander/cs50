#include <cs50.h>
#include <string.h>
#include <stdio.h>

// argc = argument count; argv = argument vector
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // prints string in arguement
        // printf("hello, %s\n", argv[1]);

        // prints all chars in arguement
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
    else
    {
        printf("hello, world\n");
    }
}
