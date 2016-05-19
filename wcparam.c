#include <stdio.h>
#include <string.h>
#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char* argv[])
{

    FILE *arquivo[argc];
    int c, cl = 0, cb = 0, cp = 0, state = OUT, i, j, clt = 0, cbt = 0, cpt = 0;
    char text[5000];
    for (j = 1; j < argc; j++)
    {
        arquivo[j] = fopen (argv[j], "r");
        cp = 0;
        cl = 0;
        cb = 0;

        if (arquivo[j] == NULL)
        {
            printf ("O arquivo %s não pôde ser aberto\n", argv[j]);
            if (j == argc-1)
            {
                printf ("L = %d    P = %d    C = %d    TOTAL\n", clt, cpt, cbt);
                return 0;
            }
            continue;
        }
        c = getc(arquivo[j]);
        i = 0;

        while (c != -1)
        {
            cb++; //contador de bytes
            cbt++;

            /*contador de linhas*/
            if (c == '\n')
            {
                cl++;
                clt++;
            }

            /*contador de palavras*/
            if (c == '\n' || c == ' ' || c == '\t')
            {
                state = OUT;
                i = 0;
            }
            else
            {
                i++;
            }
            if (i == 1)
            {
                state = IN;
                cp++;
                cpt++;
            }
            c = getc(arquivo[j]);
        }

        printf ("L = %d    P = %d    C = %d    FILE: %s\n", cl, cp, cb, argv[j]);


    }
    for (j = 1; j < argc; j++)
        fclose(arquivo[j]);


    printf ("L = %d    P = %d    C = %d    TOTAL\n", clt, cpt, cbt);


    return 0;
}
