#include <stdio.h>

void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return (x + x);
}

/*Las llamadas 2, 3, 4 y 6 son correctas, y las llamadas 1 y 5 son incorrectas.*/

int main()
{
    int x = 2;
    int y = 3;
    int z;

    trueque(&x, &y);

     printf("\nx: %d, y: %d", x, y);

    z = suma(1);
   printf("\nz: %d", z);

    trueque(&x, &y);
    printf("\nx: %d, y: %d", x, y);
    return 0;
}