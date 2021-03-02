#include <cs50.h>
#include <stdio.h>

int get_start_int(void);
int get_end_int(void);
int start_pop;

int main(void)
{
    // TODO: Prompt for start size
    int pop_start = get_start_int();

    // TODO: Prompt for end size
    int pop_end = get_end_int();

    // TODO: Calculate number of years until we reach threshold
    int counter = 0;
    float n = pop_start;

    do
    {
        if (pop_start == pop_end)
        {
            n = pop_end;
        }
        else
        {
            int gain = n / 3;
            int lose = n / 4;

            n = (float) n + (float) gain - (float) lose;

            counter++;
        }
    }
    while (n < pop_end);

    // TODO: Print number of years
    printf("Years: %i\n", counter);
}


int get_start_int(void)
{
    int n;
    do
    {
        n = get_int("Starting Population: ");
    }
    while (n < 9);
    start_pop = n;
    return n;
}

int get_end_int(void)
{
    int n;
    do
    {
        n = get_int("Ending Population: ");
    }
    while (n < start_pop);
    return n;
}