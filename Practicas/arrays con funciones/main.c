#include <stdio.h>
#include <stdlib.h>


int contarPares(int vec[], int tam);

int main()
{
    int vec[] = {21, 2, 10, 5, 6, 12, 56, 6, 0, 3};
    int contar;

    contar = contarPares(vec,10);
    printf("Cantidad de pares: %d", contar);

    return 0;
}


