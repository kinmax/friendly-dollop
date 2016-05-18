freq: freq.c
	cc freq.c -o freq

wc: wc.c
	cc wc.c -o wc

astyle: wc.c freq.c
	astyle wc.c
	astyle freq.c

clean:
	rm freq wc freq.c.orig wc.c.orig
