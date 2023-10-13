#include <stdio.h>

void f1(int *);

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        /* Cuando intento llamar a la función f1 me da error. No imprime los resultados que necesito. */
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        printf("\nValor de K después de llamar a la función: %d", f1(&K));
    }
}

void f1(int *R)
{
    *R += *R;
}