#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int max;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&num3);

    max = obtenerMaximo(num1, num2, num3);
    printf("El max numero ingresado es: %d",max);

    return 0;
}

