troca: troca.c
	cc troca.c -o troca

temp: temp.c
	cc temp.c -lm -o temp

2inteiros: 2inteiros.c
	cc 2inteiros.c -o 2inteiros

astyle: troca.c temp.c 2inteiros.c
	astyle troca.c
	astyle temp.c
	astyle 2inteiros.c

clean: 
	rm troca troca.c.orig temp temp.c.orig 2inteiros 2inteiros.c.orig
