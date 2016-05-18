#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main (int argc, char* argv[])
{

    FILE *arquivo;

    int s[SIZE], j, total = 0, c,i;

    printf ("\n\n");
    for (j = 0; j < SIZE; j++)
    {
        s[j] = 0;
    }
    for(i = 0 ; i < argc ; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (c == j)
            {
                s[j]++;
            }
        }
    }
    for (j = 0; j < SIZE; j++)
    {
        if (s[j] != 0)
        {
            printf ("%8d%4c%5x%13d\n", j, j, j, s[j]);
        }
    }
    for (j = 0; j < SIZE; j++)
    {
        total += s[j];
    }
    printf ("\n%8s%13d\n", "Total", total);

    return EXIT_SUCCESS;
}
