#include <stdio.h>
#include <stdlib.h>

# define TAM 5
void pasaje(int x[], int y);

int main()
{
    int vec[TAM];

    for (int i = 0; i < TAM; i++){

        printf("Ingrese el digito del indice %d: ", i);
        scanf("%d",&vec[i]);

    }
    printf("\n-------------------------------");
    printf("\nVector ingresado: ");
    for (int i = 0; i < TAM; i++){

        printf("%d\t", vec[i]);

    }
    printf("\n\n");
    pasaje(vec, TAM);
    printf("\n-------------------------------");
    return 0;
}

void pasaje(int x[], int y){

     for (int i = 0; i < y; i++){

        x[i]= 2*x[i];

    }
     printf("Vector duplicado: ");
     for (int i = 0; i < y; i++){

        printf("%d\t", x[i]);

    }
}
