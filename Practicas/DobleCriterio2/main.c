#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    int legajos[TAM] = {123, 543, 679, 432, 567, 111, 323, 145, 674, 543};
    int edades[TAM] = {23, 24, 21, 23, 22, 22, 44, 36, 29, 38};
    char sexos[TAM] = {'f', 'f', 'm', 'f', 'm', 'm', 'f', 'f', 'm', 'f'};
    int leg;

    printf("Ingrese el numero de legajo del alumno: ");
    scanf("%d", &leg);

    for (int i=0; i<TAM; i++){

            if(leg == legajos[i]){
                printf("Existe\n");
                printf("el sexo de esa persona es: %c\n",sexos[i]);
                break;

            }
            else{
                printf("No existe el legajo\n");

            }
}



    return 0;
}
