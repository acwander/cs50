#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        // check input for decimal digit
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            // if invalid throw error
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // convert input from string to integer
        int key = atoi(argv[1]);

        // get input string
        string s = get_string("plaintext: ");

        // loop: print ciphertext
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            int cipher = s[i] + key;
            if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                {
                    printf("%c", ((cipher - 'A') % 26) + 'A');
                }
                else
                {
                    printf("%c", ((cipher - 'a') % 26) + 'a');
                }
            }
            // character is not alphabetic, pass it through as-is
            else
            {
                printf("%c", (s[i]));
            }
        }
        printf("\n");
        return 0;
    }
}