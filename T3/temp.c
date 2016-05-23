#include <stdio.h>

float temp (float);

float temp (float f)
{
    float c;

    c = (5.0f/9.0f)*(f-32);

    if (c >= -5.0 && c <= 5.0)
        printf ("Próximo do ponto de congelamento da água.\n");
    if (c >= 95.0 && c <= 105.0)
        printf ("Próximo do ponto de ebulição da água.\n");
    if (c <= -268.0)
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


