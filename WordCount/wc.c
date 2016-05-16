#include <ctype.h>
#include <stdio.h>

int main() {

	FILE *arquivo;
	int c, cl = 0, cb = 0, cp = 0;
	char fname[51];

	printf ("\n Digite o nome completo do arquivo com extensão: ");
	scanf ("%s", fname);
	printf ("\n\n");	
	arquivo = fopen(fname, "r");

	int i = 0;
	c = getc(arquivo);
	while (c != -1) {
		cb++;		
		
		if (c == '\n')
			cl++;
		if (c == ' ')
			i++;
		if (i == 1)
			cp++;
		if (isgraph(c) == 0)
			i = 0;
		printf("%i %c %x\n", c, c, c);
		c = getc(arquivo);
	}
	
	printf ("L = %d B = %d, P = %d\n", cl, cb, cp);	
		
	fclose(arquivo);


	return 0;
}
