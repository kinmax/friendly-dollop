#include <stdio.h>
#include <math.h>
#define E 5.0f

float temp (float);

float temp (float f)
{
    float c;

    c = (5.0f/9.0f)*(f-32.0f);

    if (fabsf(c) <= E)
        printf ("Próximo do ponto de congelamento da água.\n");
    if (fabsf(c - 100.0f) <= E)
        printf ("Próximo do ponto de ebulição da água.\n");
    if (fabsf(c + 273.0f) <= E)
        printf ("Próximo do zero absoluto.\n");
    return c;
}

int main (void)
{
    float f, c;

    printf ("Digite a temperatura em ºF: ");
    scanf ("%f", &f);
    printf ("\n");
    c = temp(f);
    printf ("%.1fºC\n", c);

    return 0;
}


