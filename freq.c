#include <stdio.h>
#include <stdlib.h>
#define SIZE 256

int main (void)
{

    FILE *arquivo;

    int s[SIZE], j, total = 0, c;
    char fname[51];

    printf ("\nDigite o nome completo do arquivo de entrada com extensão: ");
    scanf ("%s", fname);
    printf ("\n\n");
    arquivo = fopen(fname, "r");
<<<<<<< HEAD
	if (arquivo == NULL)
	{
		printf ("\n\nNão foi possível abir o arquivo\n");
		return 0;
	}
=======
    if (arquivo == NULL)
    {
        printf ("O arquivo não pôde ser aberto\n");
        return 0;
    }
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9
    for (j = 0; j < SIZE; j++)
    {
        s[j] = 0;
    }
    c = getc(arquivo);
    while (c != -1)
    {
<<<<<<< HEAD
        c = getc(arquivo);
=======
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9
        for (j = 0; j < SIZE; j++)
        {
            if (c == j)
            {
                s[j]++;
            }
        }
<<<<<<< HEAD
=======
        c = getc(arquivo);
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9
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
    fclose (arquivo);

    return EXIT_SUCCESS;
}
