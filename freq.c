#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main (void)
{
	    
    FILE *arquivo;
    arquivo = fopen("freq.c", "r");
    int s[SIZE], j, total = 0;

    for (j = 0; j < SIZE; j++)
    {
        s[j] = 0;
    }
    s['A']++; //conta o número de aparições da letra A 
    s['B']++; //conta o numero de aparições da letra B
    for (j = 0; j < SIZE; j++)
    {
        total += s[j];
    }
    printf ("\n%s%13s\n", "Elemento", "Valor");
    for (j = 0; j < SIZE; j++)
    {
	if (s[j] != 0)        
	    printf ("%8d%4c%5x%13d\n", j, j, j, s[j]);
    }
    printf ("\n%8s%13d\n", "Total", total);
    fclose (arquivo);

    return EXIT_SUCCESS;
}
