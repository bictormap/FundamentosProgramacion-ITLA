#include <stdio.h>

void main(void)
{
    int I;
    float SAL, NOM;
    NOM = 0;
    for (I = 1; I<= 15; I++)
    {
        printf("\nIngrese el salario del profesor%d:\t", I);
        scanf("%f", &SAL);
        NOM = NOM + SAL;
    }
    printf("\nEl total de la nómina es: %2.f", NOM);
}