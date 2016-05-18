#include <stdio.h>
#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char* argv[]) 
{

    FILE *arquivo;
    int c, cl = 0, cb = 0, cp = 0, state = OUT, i = 0;
    char fname[51];

	for (i = 0; i < argc; i++)
	{
		arquivo = fopen (argv[i], "r");
	}    

	if (arquivo == NULL)
	{
		printf ("\n\nNão foi possível abrir o arquivo\n");
		return 0;
	}
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

        //printf("%i %c %x\n", c, c, c);
        c = getc(arquivo);
    }

    printf ("L = %d    P = %d    B = %d\n", cl, cp, cb);

    fclose(arquivo);


    return 0;
}
