#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    int x, y, maior, menor, soma = 0;
    char fname [51];

    printf ("Digite o nome completo do arquivo com extensão: ");
    scanf ("%s", fname);
    FILE *arquivo;
    arquivo = fopen(fname, "r");
    while (!feof(arquivo))
    {
        fscanf (arquivo, "%d %d", &x, &y);
        if (x > y)
        {
            maior = x;
            menor = y;
        }
        else if (x < y)
        {
            maior = y;
            menor = x;
        }
        else
        {
            continue;
        }
        printf ("Maior da linha: %d\n", maior);
        soma = soma + menor;
        x = 0;
        y = 0;
    }
    printf ("A soma dos menores é: %d\n", soma);
    fclose(arquivo);

    return 0;
}
