freq: freq.c
	cc freq.c -o freq

wc: wc.c
	cc wc.c -o wc

freq-parametro: freq-parametro.c
	cc freq-parametro.c -o freq-parametro

wcparam: wcparam.c
	cc wcparam.c -o wcparam

astyle: wc.c freq.c freq-parametro.c wcparam.c
	astyle wc.c
	astyle freq.c
	astyle freq-parametro.c
	astyle wcparam.c

clean:
	rm freq wc freq-parametro wcparam freq.c.orig wc.c.orig freq-parametro.c.orig wcparam.c.orig
