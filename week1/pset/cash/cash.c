#include <cs50.h>
#include <math.h>
#include <stdio.h>

float get_change(void);

int main(void)
{
    // Prompt for change owed
    float change = get_change();

    // Convert to cents
    int cents = round(change * 100);

    // Declare variables
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int coins = 0;

    // Select coin and reduce change
    do
    {
        if (cents >= quarter)
        {
            cents -= quarter;
            coins++;
        }
        else if (cents >= dime)
        {
            cents -= dime;
            coins++;
        }
        else if (cents >= nickel)
        {
            cents -= nickel;
            coins++;
        }
        else
        {
            cents -= penny;
            coins++;
        }
    }
    while (cents > 0);


    printf("%i\n", coins);
}

float get_change(void)
{
    float n;
    do
    {
        n = get_float("Change owed: ");
    }
    // input must be positive number
    while (n < 0);
    return n;
}