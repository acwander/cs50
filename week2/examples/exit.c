#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1; // error
    }
    printf("hello, %s\n", argv[1]);
    return 0; // success
}

// type 'echo $?' in command line to see exit status code