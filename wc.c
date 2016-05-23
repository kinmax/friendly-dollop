#include <stdio.h>
#define IN 1 //inside a word
#define OUT 0 //outside a word

<<<<<<< HEAD
int main(void) 
{
=======
int main() {
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9

    FILE *arquivo;
    int c, cl = 0, cb = 0, cp = 0, state = OUT, i = 0;
    char fname[51];

<<<<<<< HEAD
    printf ("\n Digite o nome completo do arquivo com extensão: ");
    scanf ("%s", fname);
    printf ("\n\n");
    arquivo = fopen(fname, "r");
	if (arquivo == NULL)
	{
		printf ("\n\nNão foi possível abrir o arquivo\n");
		return 0;
	}
=======
    printf ("\nDigite o nome completo do arquivo com extensão: ");
    scanf ("%s", fname);
    printf ("\n\n");
    arquivo = fopen(fname, "r");
    if (arquivo == NULL)
    {
        printf ("O arquivo não pôde ser aberto\n");
        return 0;
    }
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9
    c = getc(arquivo);

    while (c != -1) {
        cb++; //contador de bytes


        /*contador de linhas*/
        if (c == '\n')
        {
            cl++;
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
        }

<<<<<<< HEAD
        //printf("%i %c %x\n", c, c, c);
=======
        printf("%i %c %x\n", c, c, c);
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9
        c = getc(arquivo);
    }

    printf ("L = %d    P = %d    B = %d\n", cl, cp, cb);

    fclose(arquivo);


    return 0;
}
