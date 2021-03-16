#include <cs50.h>
#include <stdio.h>
#include <string.h>

// create a data structure
typedef struct
{
    string name;
    string number;
}
person;

// declare constant for number of people
const int NUMBER = 10;

int main(void)
{
    // initialize people array
    person people[NUMBER];

    for (int i = 0; i < NUMBER; i++)
    {
        people[i].name = get_string("What's the name?");
        people[i].number = get_string("What's their number?");
    }

    // people[0].name = "Brian";
    // people[0].number = "+1-617-495-1000";

    // people[1].name = "David";
    // people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}