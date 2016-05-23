#include <stdio.h>
<<<<<<< HEAD
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
=======
#include <string.h>
#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, char* argv[])
{

    FILE *arquivo[argc];
    int c, cl = 0, cb = 0, cp = 0, state = OUT, i, j, clt = 0, cbt = 0, cpt = 0;
    char a;
	if (argc == 1)
	{
		scanf ("%c", &a);
		while (a != '\0')
		{
			cb++;
			cbt++;
			if (a == '\n')
			{
				cl++;
				clt++;
			}
			if (a == '\n' || a == ' ' || a == '\t')
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
            scanf ("%c", &a);
			 
		}
		return 0;
		
	}
	else
	{    
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

	}
    printf ("L = %d    P = %d    C = %d    TOTAL\n", clt, cpt, cbt);
>>>>>>> e0128677c0a19f119f2ace580031ff2b45c4d9f9


    return 0;
}
