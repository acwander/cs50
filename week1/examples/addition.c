#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get two integers from user
    long x = get_long("x: ");

    long y = get_long("y: ");

    // print sum of input
    printf("%li\n", x + y);
}