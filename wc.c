#include <stdio.h>

int main() {

	FILE *arquivo;
	int c, cl = 0, cb = 0, cp = 0;

	arquivo = fopen("fatorial.c", "r");

	int i;
	while (c != -1) {
		cb++;		
		
		if (c == '\n')
			cl++;
		if (c == ' ')
			cp++;
		printf("%i %c %x\n", c, c, c);
		c = getc(arquivo);
	}

	cb--;	
	printf ("L = %d B = %d, P = %d\n", cl, cb, cp);	
		
	fclose(arquivo);


	return 0;
}
