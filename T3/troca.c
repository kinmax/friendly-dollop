#include <stdio.h>

void troca (float*, float*);

void troca (float *a, float *b)
{
    float x;
    x = *a;
    *a = *b;
    *b = x;
}

int main (void)
{
    float a, b;

    printf ("Digite o valor de a: ");
    scanf ("%f", &a);
    printf ("\n");
    printf ("Digite o valor de b: ");
    scanf ("%f", &b);
    troca(&a, &b);
    printf ("\na = %f\nb = %f\n", a, b);
    return 0;
}
