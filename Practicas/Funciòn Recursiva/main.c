#include <stdio.h>
#include <stdlib.h>

long factorial(int n);

int main()
{
    int numero;
    long fact;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    fact = factorial(numero);

    printf("El factorial de %d es: %ld",numero,fact);
    return 0;
}

long factorial(int n){
        long rta;
        if (n<=1){
            rta = 1;
        }else{
            rta = n*factorial(n-1);
        }
        return rta;
}
