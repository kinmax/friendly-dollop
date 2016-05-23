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
	if (arquivo == NULL)
	{
		printf ("\nO arquivo %s não pôde ser aberto\n", fname);
		return 0;
	}
	fscanf (arquivo, "%d %d", &x, &y);
	while (!feof(arquivo))
    {
        
        if (x >= y)
        {
            maior = x;
            menor = y;
        }
        else
        {
            maior = y;
            menor = x;
        }
        printf ("Maior da linha: %d\n", maior);
        soma = soma + menor;
        fscanf (arquivo, "%d %d", &x, &y);
    }
    printf ("A soma dos menores é: %d\n", soma);
    fclose(arquivo);

    return 0;
}
